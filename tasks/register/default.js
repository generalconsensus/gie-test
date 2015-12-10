module.exports = function (grunt) {
  grunt.registerTask('default', [
    'build',
    'buildLongform',
    'simple-watch'
  ]);
};
