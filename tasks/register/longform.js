module.exports = function (grunt) {
  grunt.registerTask('longform', [
    'buildLongform',
    'simple-watch'
  ]);
};
