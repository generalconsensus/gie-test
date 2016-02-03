module.exports = function(grunt) {
  var assets  = require('postcss-assets');
  
  grunt.config.merge({ 
    postcss : { 
      gesso : {
        options : {

          map: {
              inline: false // save all sourcemaps as separate files...
          },

          processors: [
            require('postcss-assets')(),
            require('autoprefixer')({
              browsers: '> 1%, last 3 versions',
              remove: false // don't remove outdated prefixes (there shouldn't be any, and this saves compile time)
            }),
          ]
        },
        dist: {
          src: '<%= pkg.themePath %>/css/*.css'
        }
      },
      gesso_longform : {
        options : {

          map: {
              inline: false // save all sourcemaps as separate files...
          },

          processors: [
            require('postcss-assets')(),
            require('autoprefixer')({
              browsers: '> 1%, last 3 versions',
              remove: false // don't remove outdated prefixes (there shouldn't be any, and this saves compile time)
            }),
          ]
        },
        dist: {
          src: '<%= pkg.longformThemePath %>/css/*.css'
        }
      }
    }
  });

  grunt.loadNpmTasks('grunt-postcss');
}
 