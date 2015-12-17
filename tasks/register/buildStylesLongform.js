module.exports = function (grunt) {
  // Test the build mode to use by checking the --prod CLI flag
  var environment = (grunt.option('prod') || grunt.option('production')) ? 'stage' : 'dev';

  grunt.registerTask('buildStylesLongform', [
    'compass:longform_' + environment
  ]);
};