module.exports = function (grunt) {
  grunt.registerTask('buildMicrosites', [
    'buildStylesMicrosites',
    'buildPatternlabMicrosites'
  ]);
};
