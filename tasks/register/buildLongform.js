module.exports = function (grunt) {
  grunt.registerTask('buildLongform', [
    'buildStylesLongform',
    'buildPatternlabLongform'
  ]);
};
