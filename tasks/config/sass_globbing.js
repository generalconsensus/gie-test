module.exports = function(grunt) {

  grunt.config.set('sass_globbing', {
    theme : {
      files : {
        '<%= pkg.themePath %>/sass/partials/glob/_variables.scss' : '<%= pkg.themePath %>/sass/partials/global/variables/**/*.scss',
        '<%= pkg.themePath %>/sass/partials/glob/_helpers.scss' : '<%= pkg.themePath %>/sass/partials/global/helpers/**/*.scss',
        '<%= pkg.themePath %>/sass/partials/glob/_extendables.scss' : '<%= pkg.themePath %>/sass/partials/global/extendables/**/*.scss',
        '<%= pkg.themePath %>/sass/partials/glob/_helper-classes.scss' : '<%= pkg.themePath %>/sass/partials/helper-classes/**/*.scss',
        '<%= pkg.themePath %>/sass/partials/glob/_layout.scss' : '<%= pkg.themePath %>/sass/partials/layout/**/*.scss',
        '<%= pkg.themePath %>/sass/partials/glob/_components.scss' : '<%= pkg.themePath %>/sass/partials/components/**/*.scss',
        '<%= pkg.themePath %>/sass/partials/glob/_nav.scss' : '<%= pkg.themePath %>/sass/partials/components/nav/**/*.scss',
        '<%= pkg.themePath %>/sass/partials/glob/_module-tweaks.scss' : '<%= pkg.themePath %>/sass/partials/module_tweaks/**/*.scss'
      }
    }
  });
  
  grunt.loadNpmTasks('grunt-sass-globbing');
}