angular.module('gieDataViz').controller('CountryInnovationsController', function($scope, es, dataService) {

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
            "size": 10
          }
        }
      }
    }
  };

  dataService.getData(queryBody).then(function(data) {
    $scope.aggregations = data.aggregations;
  });

});