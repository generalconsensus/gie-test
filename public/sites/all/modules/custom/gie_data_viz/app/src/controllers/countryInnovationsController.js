angular.module('gieDataViz').controller('CountryInnovationsController', function($scope, es, dataService, taxonomyTermService) {

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

  dataService.getData(queryBody).then(function(data) {
    var createdData = [];
    var implementedData = [];
    var termKeys = [];

    data.aggregations.country_created_totals.buckets.forEach(function(item) {
      createdData.push({
        id: item.key,
        value: item.doc_count,
      });
      termKeys.push(item.key);
    });

    data.aggregations.country_implemented_totals.buckets.forEach(function(item) {
      implementedData.push({
        id: item.key,
        value: item.doc_count,
      });
      if (termKeys.indexOf(item.key) === -1 ) termKeys.push(item.key);
    });

    taxonomyTermService.getTermNames(termKeys).then(function(result) {
      $scope.data = {
        data: createdData,
        labels: result,
      };
    });

  });
});