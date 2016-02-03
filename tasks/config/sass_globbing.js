module.exports = function(grunt) {

  grunt.config.merge({
    sass_globbing : {
      gesso : {
        files : {
          '<%= pkg.themePath %>/sass/partials/sass-globbing/_variables.scss' : '<%= pkg.themePath %>/sass/partials/global/variables/**/*.scss',
          '<%= pkg.themePath %>/sass/partials/sass-globbing/_helpers.scss' : '<%= pkg.themePath %>/sass/partials/global/helpers/**/*.scss',
          '<%= pkg.themePath %>/sass/partials/sass-globbing/_extendables.scss' : '<%= pkg.themePath %>/sass/partials/global/extendables/**/*.scss',
          '<%= pkg.themePath %>/sass/partials/sass-globbing/_helper-classes.scss' : '<%= pkg.themePath %>/sass/partials/helper-classes/**/*.scss',
          '<%= pkg.themePath %>/sass/partials/sass-globbing/_layout.scss' : '<%= pkg.themePath %>/sass/partials/layout/**/*.scss',
          '<%= pkg.themePath %>/sass/partials/sass-globbing/_components.scss' : '<%= pkg.themePath %>/sass/partials/components/**/*.scss',
          '<%= pkg.themePath %>/sass/partials/sass-globbing/_block.scss' : '<%= pkg.themePath %>/sass/partials/components/block/**/*.scss',
          '<%= pkg.themePath %>/sass/partials/sass-globbing/_nav.scss' : '<%= pkg.themePath %>/sass/partials/components/nav/**/*.scss',
          '<%= pkg.themePath %>/sass/partials/sass-globbing/_pane.scss' : '<%= pkg.themePath %>/sass/partials/components/pane/**/*.scss',
          '<%= pkg.themePath %>/sass/partials/sass-globbing/_view.scss' : '<%= pkg.themePath %>/sass/partials/components/view/**/*.scss',
          '<%= pkg.themePath %>/sass/partials/sass-globbing/_module-tweaks.scss' : '<%= pkg.themePath %>/sass/partials/module_tweaks/**/*.scss'
        }
      },
      gesso_longform : {
        files : {
          '<%= pkg.longformThemePath %>/sass/partials/sass-globbing/_variables.scss' : '<%= pkg.longformThemePath %>/sass/partials/global/variables/**/*.scss',
          '<%= pkg.longformThemePath %>/sass/partials/sass-globbing/_helpers.scss' : '<%= pkg.longformThemePath %>/sass/partials/global/helpers/**/*.scss',
          '<%= pkg.longformThemePath %>/sass/partials/sass-globbing/_extendables.scss' : '<%= pkg.longformThemePath %>/sass/partials/global/extendables/**/*.scss',
          '<%= pkg.longformThemePath %>/sass/partials/sass-globbing/_helper-classes.scss' : '<%= pkg.longformThemePath %>/sass/partials/helper-classes/**/*.scss',
          '<%= pkg.longformThemePath %>/sass/partials/sass-globbing/_layout.scss' : '<%= pkg.longformThemePath %>/sass/partials/layout/**/*.scss',
          '<%= pkg.longformThemePath %>/sass/partials/sass-globbing/_components.scss' : '<%= pkg.longformThemePath %>/sass/partials/components/**/*.scss',
          '<%= pkg.longformThemePath %>/sass/partials/sass-globbing/_nav.scss' : '<%= pkg.longformThemePath %>/sass/partials/components/nav/**/*.scss',
          '<%= pkg.longformThemePath %>/sass/partials/sass-globbing/_module-tweaks.scss' : '<%= pkg.longformThemePath %>/sass/partials/module_tweaks/**/*.scss'
        }
      }
    }
  });
  
  grunt.loadNpmTasks('grunt-sass-globbing');
}