module.exports = function (grunt) {
  grunt.registerTask('buildPatternlabMicrosites', [
    'copy:microsites_patternlabStyleguide',
    'shell:microsites_patternlab',
  ]);
};
