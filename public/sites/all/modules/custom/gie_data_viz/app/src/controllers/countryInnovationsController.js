angular.module('gieDataViz').controller('CountryInnovationsController',['$scope', 'es', 'dataService', 'taxonomyTermService', function($scope, es, dataService, taxonomyTermService) {

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
    var createdData = [],
        implementedData = [],
        sectorData = [],
        topicData = [],
        regionData = [],
        termKeys = [];

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
        id: 'created',
        label: 'Country created in',
      },{
        id: 'implemented',
        label: 'Country implemented in',
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
        'created': {
          data: createdData,
        },
        'implemented': {
          data: implementedData,
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
          label: 'Innovations',
          prefix: '',
        },
      };

      $scope.$watch('selection', function(newValue, oldValue) {
        $scope.data.data = chartData[newValue.id].data;
        updateChartTitle();
      });

      function updateChartTitle() {
        $scope.data.chartTitle = 'Innovation count by '+$scope.selection.label;
      }
    });
  });
}]);