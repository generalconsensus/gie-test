angular.module('gieDataViz').controller('OrganizationInnovationsController', function($scope, es, dataService, nodeService) {

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
        "funding_orgs_count": {
          "terms": {
            "field": "field_innovation_funders",
            "size": 10
          }
        }
      }
    }
  };

  dataService.getData(queryBody).then(function(data) {
    var fundingOrgs = [];
    var nodeKeys = [];

    data.aggregations.funding_orgs_count.buckets.forEach(function(item) {
      fundingOrgs.push({
        id: item.key,
        value: item.doc_count,
      });
      nodeKeys.push(item.key);
    });

    nodeService.getNodeTitles(nodeKeys).then(function(result) {
      $scope.data = {
        data: fundingOrgs,
        yInfo: result,
        xInfo: {
          label: 'Innovations',
          prefix: '',
        }
      };
    });
  });
});