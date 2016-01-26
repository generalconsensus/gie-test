angular.module('gieDataViz').controller('CountryFundingController', ['$scope', 'es', 'dataService', 'taxonomyTermService', function($scope, es, dataService, taxonomyTermService) {

  var queryBody = {
    index: Drupal.settings.gie_data_viz.base + 'api',
    type: 'api',
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
            "exclude": [623], //exclude Global
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
        },
        "funding_sector_counts": {
          "terms": {
            "field": "field_term_sector",
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
        },
        "funding_topic_counts": {
          "terms": {
            "field": "field_term_topic",
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
        },
        "funding_region_counts": {
          "terms": {
            "field": "field_term_region",
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

    var countryData = [],
      sectorData = [],
      topicData = [],
      regionData = [];
    var termKeys = [];

    rawData.aggregations.funding_country_counts.buckets.forEach(function(item) {
      countryData.push({
        id: item.key,
        value: item.total_funds.value,
      });
      if (termKeys.indexOf(item.key) === -1 ) termKeys.push(item.key);
    });

    rawData.aggregations.funding_sector_counts.buckets.forEach(function(item) {
      sectorData.push({
        id: item.key,
        value: item.total_funds.value,
      });
      if (termKeys.indexOf(item.key) === -1 ) termKeys.push(item.key);
    });

    rawData.aggregations.funding_topic_counts.buckets.forEach(function(item) {
      topicData.push({
        id: item.key,
        value: item.total_funds.value,
      });
      if (termKeys.indexOf(item.key) === -1 ) termKeys.push(item.key);
    });

    rawData.aggregations.funding_region_counts.buckets.forEach(function(item) {
      regionData.push({
        id: item.key,
        value: item.total_funds.value,
      });
      if (termKeys.indexOf(item.key) === -1 ) termKeys.push(item.key);
    });

    taxonomyTermService.getTermNames(termKeys).then(function(result) {

      // Set select items
      $scope.items = [{
        id: 'country',
        label: 'Country',
      },{
        id: 'sector',
        label: 'Sector',
      },{
        id: 'topic',
        label: 'Topic',
      },{
        id: 'region',
        label: 'Region',
      }];

      // set default selection
      $scope.selection = {
        id: 'country',
        label: 'Country',
      };

      // All data by selection id
      var chartData = {
        'country': {
          data: countryData,
        },
        'sector': {
          data: sectorData,
        },
        'topic': {
          data: topicData,
        },
        'region': {
          data: regionData,
        },
      };

      $scope.data = {
        data: chartData[$scope.selection.id].data,
        xInfo: result,
        yInfo: {
          label: 'Funding Sum',
          prefix: '$',
        }
      };

      $scope.$watch('selection', function(newValue, oldValue) {
        $scope.data.data = chartData[newValue.id].data;
        updateChartTitle();
      });

      function updateChartTitle() {
        $scope.data.chartTitle = 'Funding by '+$scope.selection.label;
      }
    });
  });
}]);