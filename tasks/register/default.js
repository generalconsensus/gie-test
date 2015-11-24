module.exports = function (grunt) {
  grunt.registerTask('default', [
    'build',
    'buildLongform',
    'buildMicrosites',
    'simple-watch'
  ]);
};
