module.exports = function (grunt) {
  // Test the build mode to use by checking the --prod CLI flag
  var environment = (grunt.option('prod') || grunt.option('production')) ? 'stage' : 'dev';

  grunt.registerTask('buildStyles', [
    'sass_globbing:gesso',
    'sass:gesso',
    'postcss:gesso',
    'sass_globbing:gesso_longform',
    'sass:gesso_longform',
    'postcss:gesso_longform'
  ]);
};
