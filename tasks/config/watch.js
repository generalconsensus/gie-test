module.exports = function(grunt) {
  // Test the build mode to use by checking the --environment CLI flag
  var environment = (grunt.option('prod') || grunt.option('production')) ? 'stage' : 'dev';
  
  grunt.config.merge({
    watch : {
      compass: {
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
      longform_compass: {
        files : [ '<%= pkg.longformThemePath %>/sass/**/*.scss' ],
        tasks : [ 'compass:longform_' + environment ],
        options : {
          livereload : true
        }
      },
      longform_patternlab : {
        files : [ '<%= pkg.longformThemePath %>/patternlab/source/**/*' ],
        tasks : [ 'shell:longform_patternlab' ],
        options : {
          livereload : true
        }
      }
    }
  });

  grunt.loadNpmTasks('grunt-contrib-watch');
  grunt.loadNpmTasks('grunt-simple-watch');
}
