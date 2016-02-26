module.exports = function (grunt) {
	grunt.registerTask('build', [
		'bower',
    'buildStyles',
		'buildPatternlab',
		'concat',
    'uglify'
	]);
};
