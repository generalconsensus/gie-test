angular.module('gieDataViz').factory('taxonomyTermService', function(es, dataService) {
  return {
    getTermNames: function(terms) {

      var queryBody = {
        index: Drupal.settings.gie_data_viz.base + Drupal.settings.gie_data_viz.indices.terms.machine_name,
        type: Drupal.settings.gie_data_viz.indices.terms.machine_name,
        size: terms.length,
        body: {
          "fields": ["name","id"],
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

      var results = dataService.getData(queryBody).then(function (response) {
        var terms = {};

        response.hits.hits.forEach(function(item) {
          terms[item.fields.id[0]] = item.fields.name[0];
        });

        return terms;
      });

      return results;
    }
  }
});