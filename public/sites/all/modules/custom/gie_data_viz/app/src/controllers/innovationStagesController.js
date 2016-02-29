angular.module('gieDataViz').controller('InnovationStagesController', ['$scope', 'es', 'dataService', 'taxonomyTermService', function($scope, es, dataService, taxonomyTermService) {
  var queryBody = {
    index: Drupal.settings.gie_data_viz.base + 'api',
    type: "api",
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
        "innovation_stage": {
          "terms": {
            "field": "field_innovation_stage",
            "size": 20
          }
        }
      }
    }
  };

  dataService.getData(queryBody).then(function(rawData) {
    var stageData = [],
        termKeys = [];

    rawData.aggregations.innovation_stage.buckets.forEach(function(item) {
      stageData.push({
        id: item.key,
        value: item.doc_count,
      });
      if (termKeys.indexOf(item.key) === -1 ) termKeys.push(item.key);
    });

    //sort by id
    stageData.sort(function (a,b) {
      if (a.id > b.id) {
        return 1;
      }
      if (a.id < b.id) {
        return -1;
      }
      // a must be equal to b
      return 0;
    });

    taxonomyTermService.getTermNames(termKeys).then(function(result) {
      $scope.data = {
        data: stageData,
        yInfo: result,
        xInfo: {
          label: 'Innovations',
          prefix: '',
        },
        chartTitle: 'Innovations by Stage',
      };
    });
  });
}]);