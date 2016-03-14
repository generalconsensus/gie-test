angular.module('gieDataViz').directive('barChart', function() {

  return {
    restrict: 'E',
    template: '<div data="data" items="items" selection="selection">' +
      '<h2 data-ng-if="data.chartTitle"> {{ data.chartTitle }} </h2>' +
      '<select data-ng-if="items" ng-options="item as item.label for item in items track by item.id" data-ng-model="$parent.selection"></select>' +
      '<div><svg class="chart bar-chart vertical" id="bar_chart__{{$id}}"></svg></div>' +
      '</div>',
    replace: true,
    scope: { data: "=", items: "=", selection: "=", },
    link: function (scope){
      scope.$watch('data', function(newValue,oldValue){
        if (newValue && typeof oldValue === 'undefined') {
          var xInfo = newValue.xInfo,
              yInfo = newValue.yInfo,
              data = newValue.data,
              maxLength = d3.max(data, function(d) { return xInfo[d.id].length; }) + 2;

          var maxWidth = 600,//full svg width
              height = 300,//bar chart height
              margin = {top: 20, right: 30, bottom: maxLength * 5, left: 60},//margins around the chart for axis labels and padding
              width = maxWidth - margin.left - margin.right,//bar chart width
              maxHeight = height + margin.top + margin.bottom;//full svg height

          // Format numbers to 3 digits. e.g. 100, 100k, 10m, etc.
          var formatter = d3.format("s");

          var x = d3.scale.ordinal()
            .domain(data.map(function(d) {return xInfo[d.id]; }))
            .rangeRoundBands([0,width],.5);

          var y = d3.scale.linear()
            .domain([0,d3.max(data, function(d) { return d.value; })])
            .range([height, 0]);

          var xAxis = d3.svg.axis()
            .scale(x)
            .orient("bottom")
            .tickSize(0,0);

          var yAxis = d3.svg.axis()
            .scale(y)
            .orient("left")
            .tickFormat(function(d) { return yInfo.prefix + formatter(d); })
            .tickSize(-width,0,0);

          var chart = d3.select('#bar_chart__'+scope.$id)
              .attr("width", maxWidth)
              .attr("height", maxHeight)
            .append("g")
              .attr("transform", "translate("+margin.left+","+margin.top+")");

          chart.append("g")
              .attr("class", "x axis")
              .attr("transform", "translate(0," + height + ")")
              .call(xAxis)
            .selectAll("text")
              .style("text-anchor", "end")
              .attr("dx", -5)
              .attr("dy", 0)
              .attr("transform", "rotate(-90)");

          chart.append("g")
              .attr("class", "y axis grid")
              .call(yAxis)
            .append("text")
              .attr("transform", "rotate(-90)")
              .attr("y", -50)
              .attr("x", -(height/2))
              .attr("dy", ".71em")
              .style("text-anchor", "middle")
              .text(yInfo.label);


          var bar = chart.selectAll(".bar")
              .data(data);

          bar.enter().append("rect")
              .attr("class", "bar")
              .attr("x", function(d) { return x(xInfo[d.id]); })
              .attr("y", y(0))
              .attr("height", height - y(0))
              .attr("width", x.rangeBand())
            .transition().duration(500)
              .attr("y", function(d) { return y(d.value); })
              .attr("height", function(d) { return height - y(d.value); });

          bar.exit().remove();

          scope.$watch('data.data', function(newValue,oldValue) {
            if (newValue !== oldValue) {
              redraw(newValue);
            }
          });

          function redraw(data) {
            //update chart height
            maxLength = d3.max(data, function(d) { return xInfo[d.id].length; });
            margin.bottom = maxLength * 5;//new bottom margin to fit long labels, 5 per character
            maxHeight = height+margin.top+margin.bottom;
            d3.select('#bar_chart__'+scope.$id).transition().duration(500).attr("height",maxHeight) + 2;
            //update x and y information
            x.domain(data.map(function(d) { return xInfo[d.id]; }));
            y.domain([0,d3.max(data, function(d) { return d.value ; })]);
            //update x axis labels
            chart.select('.x.axis').transition().duration(500).call(xAxis);
            //rotate x axis labels
            chart.select('.x.axis')
              .selectAll("text")
                .style("text-anchor", "end")
                .attr("dx", -5)
                .attr("dy", 0)
                .attr("transform", "rotate(-90)");
            //update y axis
            chart.select('.y.axis').transition().duration(500).call(yAxis);
            //insert new bar data
            var bars = chart.selectAll(".bar").data(data);
            //remove unneeded bars
            bars.exit()
              .transition().duration(500)
                .attr("y", y(0))
                .attr("height", height - y(0))
                .style('fill-opacity', 1e-6)
                .remove();
            //append new bars
            bars.enter().append("rect")
                .attr("class", "bar")
                .attr("y", y(0))
                .attr("height", height - y(0));
            //transition bar information to correct height
            bars.transition().duration(500).attr("x", function(d) { return x(xInfo[d.id]); })
                .attr("width", x.rangeBand())
                .attr("y", function(d) { return y(d.value); })
                .attr("height", function(d) { return height - y(d.value); });
          }
        }
      });
    }
  };
});