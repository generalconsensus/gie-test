angular.module('gieDataViz').factory('dataService', function (es, $q) {

  return {
    getData: function(queryBody) {
      // search for documents (uses POST)
      return es.search(queryBody).then(function (response) {
        if (typeof response === 'object') {
          return response;
        } else {
          // invalid response
          return $q.reject(response);
        }

      }, function (response) {
        // something went wrong
        return $q.reject(response);
      });
    }
  };
});