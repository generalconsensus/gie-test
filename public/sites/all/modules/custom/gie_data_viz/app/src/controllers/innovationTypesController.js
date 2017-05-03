angular.module('gieDataViz').controller('InnovationTypesController', ['$scope', 'es', 'dataService', 'taxonomyTermService', function($scope, es, dataService, taxonomyTermService) {
  var queryBody = {
    index: Drupal.settings.gie_data_viz.base + 'api',
    type: 'api',
    size: 0,
    body: {
      "query": {
        "filtered": {
          "query": {
            "match": {
              "type": "innovation"
            }
          }
        }
      },
      "aggs": {
        "innovation_type": {
          "terms": {
            "field": "field_innovation_type",
            "size": 20
          }
        }
      }
    }
  };

  dataService.getData(queryBody).then(function(rawData) {
    var typeData = [],
        termKeys = [];

    rawData.aggregations.innovation_type.buckets.forEach(function(item) {
      typeData.push({
        id: item.key,
        value: item.doc_count,
      });
      if (termKeys.indexOf(item.key) === -1 ) termKeys.push(item.key);
    });

    taxonomyTermService.getTermNames(termKeys).then(function(result) {
      $scope.data = {
        data: typeData,
        xInfo: result,
        yInfo: {
          label: 'Innovations',
          prefix: '',
        }
      };
      updateChartTitle();

      function updateChartTitle() {
        $scope.data.chartTitle = 'Innovations by Type';
      }
    });
  })
}]);