module.exports = function (grunt) {
  grunt.registerTask('buildPatternlab', [
    'copy:patternlabStyleguide',
    'shell:patternlab',
    'copy:longform_patternlabStyleguide',
    'shell:longform_patternlab',
    'copy:microsites_patternlabStyleguide',
    'shell:microsites_patternlab',
  ]);
};
