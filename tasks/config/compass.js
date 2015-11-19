module.exports = function(grunt) {
  grunt.config.merge({
    compass: {
      options: {
        basePath: '<%= pkg.themePath %>',
        config: '<%= pkg.themePath %>/config.rb',
      },
      dev: {
        options: {
          environment: 'development',
          outputStyle: 'expanded',
          noLineComments: false,
          bundleExec: true,
        },
      },
      stage: {
        options: {
          environment: 'production',
          outputStyle: 'compressed',
          noLineComments: true,
          force: true,
          bundleExec: true,
        },
      },
      longform_dev: {
    	  options: {
    	    environment: 'development',
          outputStyle: 'expanded',
          noLineComments: false,
          bundleExec: true,
          basePath: 'public/sites/all/themes/gesso_longform',
          config: 'public/sites/all/themes/gesso_longform/config.rb'
    	  }
      },
      longform_stage: {
        options: {
          environment: 'production',
          outputStyle: 'compressed',
          noLineComments: true,
          force: true,
          bundleExec: true,
          basePath: 'public/sites/all/themes/gesso_longform',
          config: 'public/sites/all/themes/gesso_longform/config.rb'
        }
      },
      microsites_dev: {
        options: {
          environment: 'development',
          outputStyle: 'expanded',
          noLineComments: false,
          bundleExec: true,
          basePath: 'public/sites/all/themes/gesso_microsites',
          config: 'public/sites/all/themes/gesso_microsites/config.rb'
        }
      },
      microsites_stage: {
        options: {
          environment: 'production',
          outputStyle: 'compressed',
          noLineComments: true,
          force: true,
          bundleExec: true,
          basePath: 'public/sites/all/themes/gesso_microsites',
          config: 'public/sites/all/themes/gesso_microsites/config.rb'
        }
      }
    },
  });

  grunt.loadNpmTasks('grunt-contrib-compass');
};
