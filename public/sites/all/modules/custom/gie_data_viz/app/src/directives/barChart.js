angular.module('gieDataViz').directive('barChart', function($window, es, dataService, taxonomyTermService) {


  var queryBody = {
    index: Drupal.settings.gie_data_viz.base + Drupal.settings.gie_data_viz.indices.api.machine_name,
    type: Drupal.settings.gie_data_viz.indices.api.machine_name,
    size: 0,
    body: {
      "query": {
        "match": {
          "type": "innovation"
        }
      },
      "aggs": {
        "country_created_totals": {
          "terms": {
            "field": "field_innovation_created",
            "size": 20
          }
        },
        "country_implemented_totals": {
          "terms": {
            "field": "field_innovation_implemented",
            "size": 20
          }
        }
      }
    }
  };

  return {
    restrict: 'EA',
    template: "<svg class=\"chart\"></svg>",
    link: function (scope){

      dataService.getData(queryBody).then(function(results) {
        scope.data = results;

        var rawData = scope.data.aggregations.country_created_totals.buckets;

        var data = [];
        var createdData = [];
        var implementedData = [];
        var termKeys = [];

        rawData.forEach(function(item) {
          createdData.push({
            name: item.key,
            value: item.doc_count,
          });
          termKeys.push(item.key);
        });

        scope.data.aggregations.country_implemented_totals.buckets.forEach(function(item) {
          implementedData.push({
            name: item.key,
            value: item.doc_count,
          });
          if (termKeys.indexOf(item.key) === -1 ) termKeys.push(item.key);
        });

        var terms = {};

        taxonomyTermService.getTermNames(termKeys).then(function(result) {
          terms = result;

          data = createdData;

          var margin = {top: 20, right: 30, bottom: 150, left: 40},
            width = 700 - margin.left - margin.right,
            height = 500 - margin.top - margin.bottom;

          var x = d3.scale.ordinal()
            .rangeRoundBands([0,width],.1);

          var y = d3.scale.linear()
            .range([height, 0]);

          var xAxis = d3.svg.axis()
            .scale(x)
            .orient("bottom");

          var yAxis = d3.svg.axis()
            .scale(y)
            .orient("left");

          var chart = d3.select(".chart")
            .attr("width", width + margin.left + margin.right)
            .attr("height", height + margin.top + margin.bottom)
            .append("g")
            .attr("transform", "translate("+margin.left+","+margin.top+")");

          x.domain(data.map(function(d) {return terms[d.name]; }));
          y.domain([0,d3.max(data, function(d) { return d.value; })]);

          chart.append("g")
            .attr("class", "x axis")
            .attr("transform", "translate(0," + height + ")")
            .call(xAxis)
            .selectAll("text")
            .style("text-anchor", "end")
            .attr("dx", -8)
            .attr("dy", -5)
            .attr("transform", "rotate(-90)");


          chart.append("g")
            .attr("class", "y axis")
            .call(yAxis)
            .append("text")
            .attr("transform", "rotate(-90)")
            .attr("y", -35)
            .attr("x", -(height/2))
            .attr("dy", ".71em")
            .style("text-anchor", "middle")
            .text("Innovations");


          chart.selectAll(".bar")
            .data(data)
            .enter().append("rect")
            .attr("class", "bar")
            .attr("x", function(d) { return x(terms[d.name]); })
            .attr("y", function(d) { return y(d.value); })
            .attr("height", function(d) { return height - y(d.value); })
            .attr("width", x.rangeBand());
        });
      });

    }
  };
});