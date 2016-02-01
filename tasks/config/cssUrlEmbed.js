module.exports = function(grunt) {

  grunt.config.set('cssUrlEmbed', {
    encode: {
      expand: true,
      cwd: '<%= pkg.themePath %>/css',
      src: [ '**/*.css' ],
      dest: '<%= pkg.themePath %>/css'
    },
    options : {
      failOnMissingUrl : false
    }
  });
  
  grunt.loadNpmTasks('grunt-css-url-embed');
}