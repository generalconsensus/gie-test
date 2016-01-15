angular.module('gieDataViz').factory('taxonomyTermService', function(es, dataService) {
  return {
    getTermNames: function(terms) {

      var queryBody = {
        index: Drupal.settings.gie_data_viz.base + Drupal.settings.gie_data_viz.indices.terms.machine_name,
        type: Drupal.settings.gie_data_viz.indices.terms.machine_name,
        size: terms.length,
        body: {
          "query": {
            "filtered": {
              "filter": {
                "terms": {
                  "id": terms,
                }
              }
            }
          }
        }
      };

      $results = dataService.getData(queryBody).then(function (response) {
        var terms = {};

        response.hits.hits.forEach(function(item) {
          terms[item['_source'].id] = item['_source'].name;
        });

        return terms;
      });

      return $results;
    }
  }
});