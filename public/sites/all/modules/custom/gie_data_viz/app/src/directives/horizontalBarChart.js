angular.module('gieDataViz').directive('horizontalBarChart', function() {
  // Wrap text to a certain width
  function wrap(text, width) {
    text.each(function() {
      var text = d3.select(this),
          words = text.text().split(/\s+/).reverse(),
          word,
          line = [],
          lineNumber = 0,
          lineHeight = 0.9, // ems
          y = text.attr("y"),
          dy = parseFloat(text.attr("dy")),
          tspan = text.text(null).append("tspan").attr("x", 0).attr("y", y).attr("dy", dy + "em");
      while (word = words.pop()) {
        line.push(word);
        tspan.text(line.join(" "));
        if (tspan.node().getComputedTextLength() > width) {
          line.pop();
          tspan.text(line.join(" "));
          line = [word];
          tspan = text.append("tspan").attr("x", 0).attr("y", y).attr("dy", ++lineNumber * lineHeight + dy + "em").text(word);
        }
      }
    });
  }

  return {
    restrict: 'E',
    template: '<svg class="chart bar-chart horizontal" id="horizontal_bar_chart__{{$id}}" data="data"></svg>',
    replace: true,
    scope: { data: "=" },
    link: function (scope){
      scope.$watch('data', function(newValue, oldValue) {
        if (newValue) {
          var xInfo = newValue.xInfo,
              yInfo = newValue.yInfo,
              data = newValue.data;

          var maxWidth = 600,
              maxHeight = 300,
              margin = {top: 0, right: 30, bottom: 60, left: 150},
              width = maxWidth - margin.left - margin.right,
              height = maxHeight - margin.top - margin.bottom;

          var formatter = d3.format("s");

          var x = d3.scale.linear()
            .domain([0,d3.max(data, function(d) { return d.value; })])
            .range([0,width]);

          var y = d3.scale.ordinal()
            .domain(data.map(function(d) { return yInfo[d.id]; }))
            .rangeRoundBands([0,height],.5);

          var xAxis = d3.svg.axis()
              .scale(x)
              .orient("bottom")
              .tickFormat(function(d) { return xInfo.prefix + formatter(d); })
              .tickSize(-height,0,0);

          var yAxis = d3.svg.axis()
              .scale(y)
              .orient("left")
              .tickSize(0,0);

          var chart = d3.select('#horizontal_bar_chart__'+scope.$id)
              .attr("width", maxWidth)
              .attr("height", maxHeight)
            .append("g")
              .attr("transform", "translate("+margin.left+","+margin.top+")");

          chart.append("g")
              .attr("class", "x axis grid")
              .attr("transform", "translate(0,"+height+")")
              .call(xAxis)
            .append("text")
              .attr("y", 25)
              .attr("x", width/2)
              .style("text-anchor", "middle")
              .text(xInfo.label);

          chart.append("g")
              .attr("class", "y axis")
              .attr("transform", "translate(-2,0)") //shifts axis labels to left
              .call(yAxis)
            .selectAll(".tick text")
              .call(wrap, margin.left-2); //wrap text to fit within the left margin

          var bar = chart.selectAll(".bar")
              .data(data);

          bar.enter().append("rect")
              .attr("class", "bar")
              .attr("x", 0)
              .attr("y", function(d) { return y(yInfo[d.id]); })
              .attr("height", y.rangeBand())
              .attr("width", 0 )
            .transition().duration(500)
              .attr("width", function (d) { return x(d.value); });

          bar.exit().remove();
        }
      });
    }
  };
});