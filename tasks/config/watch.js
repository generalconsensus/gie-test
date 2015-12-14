module.exports = function(grunt) {
  // Test the build mode to use by checking the --environment CLI flag
  var environment = (grunt.option('prod') || grunt.option('production')) ? 'stage' : 'dev';
  
  grunt.config.merge({
    watch : {
      compass: {
        files : [ '<%= pkg.themePath %>/sass/**/*.scss' ],
        tasks : [ 'compass:' + environment ],
        options : {
          livereload : true
        }
      },
      patternlab : {
        files : [ '<%= pkg.themePath %>/patternlab/source/**/*' ],
        tasks : [ 'shell:patternlab' ],
        options : {
          livereload : true
        }
      },
      longform_compass: {
        files : [ 'public/sites/all/themes/gesso_longform/sass/**/*.scss' ],
        tasks : [ 'compass:longform_' + environment ],
        options : {
          livereload : true
        }
      },
      longform_patternlab : {
        files : [ 'public/sites/all/themes/gesso_longform/patternlab/source/**/*' ],
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