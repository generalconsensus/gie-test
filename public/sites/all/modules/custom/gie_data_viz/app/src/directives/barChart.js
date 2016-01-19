angular.module('gieDataViz').directive('barChart', function() {

  return {
    restrict: 'E',
    template: '<svg class="chart bar-chart vertical" id="bar_chart__{{$id}}" data="data"></svg>',
    replace: true,
    scope: { data: "=" },
    link: function (scope){
      scope.$watch('data', function(newValue,oldValue){
        if (newValue) {
          var xInfo = newValue.xInfo,
              yInfo = newValue.yInfo,
              data = newValue.data;

          var maxWidth = 600,
              maxHeight = 400,
              margin = {top: 20, right: 30, bottom: 100, left: 60},
              width = maxWidth - margin.left - margin.right,
              height = maxHeight - margin.top - margin.bottom;

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
              .attr("y", height)
              .attr("height", 0 )
              .attr("width", x.rangeBand())
            .transition().duration(500)
              .attr("y", function(d) { return y(d.value); })
              .attr("height", function(d) { return height - y(d.value); });

          bar.exit().remove();
        }
      });
    }
  };
});