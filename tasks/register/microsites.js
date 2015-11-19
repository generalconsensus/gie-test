module.exports = function (grunt) {
  grunt.registerTask('microsites', [
    'buildMicrosites',
    'simple-watch'
  ]);
};
