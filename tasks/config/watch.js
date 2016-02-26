module.exports = function(grunt) {
  // Test the build mode to use by checking the --environment CLI flag
  var environment = (grunt.option('prod') || grunt.option('production')) ? 'stage' : 'dev';
  
  grunt.config.merge({
    watch : {
      gesso: {
        files : [ '<%= pkg.themePath %>/sass/**/*.scss' ],
        tasks : [ 'buildStyles' ],
      },
      patternlab : {
        files : [ '<%= pkg.themePath %>/patternlab/source/**/*' ],
        tasks : [ 'shell:patternlab' ],
        options : {
          livereload : true
        }
      },
      gesso_longform: {
        files : [ '<%= pkg.longformThemePath %>/sass/**/*.scss' ],
        tasks : [ 'buildStyles' ],
      },
      gesso_longform_patternlab : {
        files : [ '<%= pkg.longformThemePath %>/patternlab/source/**/*' ],
        tasks : [ 'shell:patternlab' ],
        options : {
          livereload : true
        }
      }
    }
  });

  grunt.loadNpmTasks('grunt-contrib-watch');
  grunt.loadNpmTasks('grunt-simple-watch');
}
