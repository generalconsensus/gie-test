angular.module('gieDataViz').service('es', function (esFactory) {
  return esFactory({ host: Drupal.settings.gie_data_viz.url });
});