angular.module('gieDataViz').controller('CountryFundingController', function($scope, es, dataService, taxonomyTermService) {

  var queryBody = {
    index: Drupal.settings.gie_data_viz.base + Drupal.settings.gie_data_viz.indices.api.machine_name,
    type: Drupal.settings.gie_data_viz.indices.api.machine_name,
    size: 0,
    body: {
      "query": {
        "filtered": {
          "query": {
            "match": {
              "type": "funding"
            }
          },
          "filter": {
            "bool": {
              "must": [{
                "exists": {
                  "field": "field_funding_grant_award_value"
                }
              }]
            }
          }
        }
      },
      "aggs": {
        "funding_country_counts": {
          "terms": {
            "field": "field_term_country",
            "exclude": [623],
            "size": 20,
            "order": { "total_funds.value": "desc" }
          },
          "aggs": {
            "total_funds": {
              "sum": {
                "field": "field_funding_grant_award_value"
              }
            }
          }
        }
      }
    }
  };

  dataService.getData(queryBody).then(function(rawData) {
    var data = [];
    var termKeys = [];

    rawData.aggregations.funding_country_counts.buckets.forEach(function(item) {
      data.push({
        id: item.key,
        value: item.total_funds.value,
      });
      termKeys.push(item.key);
    });

    taxonomyTermService.getTermNames(termKeys).then(function(result) {
      $scope.data = {
        data: data,
        xInfo: result,
        yInfo: {
          label: 'Funding Sum',
          prefix: '$',
        }
      };
    });
  });
});