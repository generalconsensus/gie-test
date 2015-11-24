module.exports = function (grunt) {
  grunt.registerTask('buildPatternlabLongform', [
    'copy:longform_patternlabStyleguide',
    'shell:longform_patternlab',
  ]);
};
