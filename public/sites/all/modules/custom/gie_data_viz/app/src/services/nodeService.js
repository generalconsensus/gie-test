angular.module('gieDataViz').factory('nodeService', function(es, dataService) {
  return {
    getNodeTitles: function(nodeKeys) {

      var queryBody = {
        index: Drupal.settings.gie_data_viz.base + 'api',
        type: 'api',
        size: nodeKeys.length,
        body: {
          "fields": ["title","id"],
          "query": {
            "filtered": {
              "filter": {
                "terms": {
                  "id": nodeKeys,
                }
              }
            }
          }
        }
      };

      var results = dataService.getData(queryBody).then(function (response) {
        var nodes = {};

        response.hits.hits.forEach(function(item) {
          nodes[item.fields.id[0]] = item.fields.title[0];
        });

        return nodes;
      });

      return results;
    }
  }
});