angular.module('gieDataViz').service('es', ['esFactory',function (esFactory) {
  return esFactory({ host: Drupal.settings.gie_data_viz.url });
}]);