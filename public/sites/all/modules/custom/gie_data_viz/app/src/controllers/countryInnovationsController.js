angular.module('gieDataViz').controller('CountryInnovationsController', function($scope, es, dataService, taxonomyTermService) {

  var queryBody = {
    index: Drupal.settings.gie_data_viz.base + 'api',
    type: 'api',
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
            "exclude": [623], //exclude Global
            "size": 20
          }
        },
        "country_implemented_totals": {
          "terms": {
            "field": "field_innovation_implemented",
            "exclude": [623], //exclude Global
            "size": 20
          }
        }
      }
    }
  };

  dataService.getData(queryBody).then(function(rawData) {
    var createdData = [];
    var implementedData = [];
    var termKeys = [];

    rawData.aggregations.country_created_totals.buckets.forEach(function(item) {
      createdData.push({
        id: item.key,
        value: item.doc_count,
      });
      termKeys.push(item.key);
    });

    rawData.aggregations.country_implemented_totals.buckets.forEach(function(item) {
      implementedData.push({
        id: item.key,
        value: item.doc_count,
      });
      if (termKeys.indexOf(item.key) === -1 ) termKeys.push(item.key);
    });

    taxonomyTermService.getTermNames(termKeys).then(function(result) {

      // Set select items
      $scope.items = [{
        id: 'created',
        label: 'Created in',
      },{
        id: 'implemented',
        label: 'Implemented in',
      }];

      $scope.selection = $scope.items[0];

      // All data by selection id
      var chartData = {
        'created': {
          data: createdData,
        },
        'implemented': {
          data: implementedData,
        },
      };

      $scope.data = {
        data: chartData[$scope.selection.id].data,
        xInfo: result,
        yInfo: {
          label: 'Innovations',
          prefix: '',
        },
      };

      $scope.$watch('selection', function(newValue, oldValue) {
        $scope.data.data = chartData[newValue.id].data;
        updateChartTitle();
      });

      function updateChartTitle() {
        $scope.data.chartTitle = 'Innovation count by Country '+$scope.selection.label;
      }
    });
  });
});