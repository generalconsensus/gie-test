module.exports = function (grunt) {
  grunt.registerTask('dev', [
    'build',
    'simple-watch'
  ]);
};
