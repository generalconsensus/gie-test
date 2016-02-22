angular.module('gieDataViz').controller('FundingCountController', ['$scope', 'es', 'dataService', 'taxonomyTermService', function($scope, es, dataService, taxonomyTermService) {

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
          }
        }
      },
      "aggs": {
        "country_count": {
          "terms": {
            "field": "field_term_country",
            "exclude": [623],
            "size": 20
          }
        },
        "sector_count": {
          "terms": {
            "field": "field_term_sector",
            "size": 20
          }
        },
        "topic_count": {
          "terms": {
            "field": "field_term_topic",
            "size": 20
          }
        },
        "region_count": {
          "terms": {
            "field": "field_term_region",
            "size": 20
          }
        }
      }
    }
  };

  dataService.getData(queryBody).then(function(rawData) {
    var countryData = [],
        sectorData = [],
        topicData = [],
        regionData = [],
        termKeys = [];

    rawData.aggregations.country_count.buckets.forEach(function(item) {
      countryData.push({
        id: item.key,
        value: item.doc_count,
      });
      if (termKeys.indexOf(item.key) === -1 ) termKeys.push(item.key);
    });

    rawData.aggregations.sector_count.buckets.forEach(function(item) {
      sectorData.push({
        id: item.key,
        value: item.doc_count,
      });
      if (termKeys.indexOf(item.key) === -1 ) termKeys.push(item.key);
    });

    rawData.aggregations.topic_count.buckets.forEach(function(item) {
      topicData.push({
        id: item.key,
        value: item.doc_count,
      });
      if (termKeys.indexOf(item.key) === -1 ) termKeys.push(item.key);
    });

    rawData.aggregations.region_count.buckets.forEach(function(item) {
      regionData.push({
        id: item.key,
        value: item.doc_count,
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

      $scope.selection = $scope.items[0];

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
          label: 'Funding Count',
          prefix: '',
        }
      };

      $scope.$watch('selection', function(newValue, oldValue) {
        $scope.data.data = chartData[newValue.id].data;
        updateChartTitle();
      });

      function updateChartTitle() {
        $scope.data.chartTitle = 'Number of Funding Opportunities by '+$scope.selection.label;
      }
    });
  });
}]);
