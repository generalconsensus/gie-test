angular.module('gieDataViz').directive('barChart', function() {

  return {
    restrict: 'E',
    template: "<svg class=\"chart bar-chart vertical\" id=\"bar_chart__{{$id}}\" data=\"data\"></svg>",
    replace: true,
    scope: { data: "="},
    link: function (scope){
      scope.$watch('data', function(newValue,oldValue){
        if (newValue) {
          var xInfo = newValue.xInfo,
              yInfo = newValue.yInfo,
              data = newValue.data;

          var margin = {top: 20, right: 30, bottom: 100, left: 60},
            width = 700 - margin.left - margin.right,
            height = 500 - margin.top - margin.bottom;

          // Format numbers to 3 digits. e.g. 100, 100k, 10m, etc.
          var formatter = d3.format("s");

          var x = d3.scale.ordinal()
            .rangeRoundBands([0,width],.1);

          var y = d3.scale.linear()
            .range([height, 0]);

          var xAxis = d3.svg.axis()
            .scale(x)
            .orient("bottom");

          var yAxis = d3.svg.axis()
            .scale(y)
            .orient("left")
            .tickFormat(function(d) { return yInfo.prefix + formatter(d); });

          var chart = d3.select('#bar_chart__'+scope.$id)
            .attr("width", width + margin.left + margin.right)
            .attr("height", height + margin.top + margin.bottom)
            .append("g")
            .attr("transform", "translate("+margin.left+","+margin.top+")");

          x.domain(data.map(function(d) {return xInfo[d.id]; }));
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
            .attr("y", -50)
            .attr("x", -(height/2))
            .attr("dy", ".71em")
            .style("text-anchor", "middle")
            .text(yInfo.label);


          chart.selectAll(".bar")
            .data(data)
            .enter().append("rect")
            .attr("class", "bar")
            .attr("x", function(d) { return x(xInfo[d.id]); })
            .attr("y", function(d) { return y(d.value); })
            .attr("height", function(d) { return height - y(d.value); })
            .attr("width", x.rangeBand());
        }
      });
    }
  };
});