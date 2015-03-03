module.exports = function (grunt) {

  // Load grunt tasks automatically
  require('load-grunt-tasks')(grunt);

  // Time how long tasks take. Can help when optimizing build times
  require('time-grunt')(grunt);

  // Define the configuration for all the tasks
  grunt.initConfig({

    // Compiles Sass to CSS and generates debug files if requested
    compass: {
      options: {
 
      },
      patternlab: {
        options: {
          // settings here override config.rb
          // http://compass-style.org/help/documentation/configuration-reference
          basePath: 'source',
          bundleExec: true,  // use Bundler specified versions
          //config: 'source/config.rb',  // use Compass config file for most settings
          outputStyle: 'expanded',
          //sourcemap: true,
        },
      },
    },

    // Watch for changes & run each task asynchronously
    concurrent: {
      patternlab: {
        tasks: [
          'shell:patternlabWatchReload',
          'watch'
        ],
        options: {
          logConcurrentOutput: true
        }
      },
    },

    shell: {
      // Copy Pattern Lab's public directory to theme directory
      patternlabCopy: {
        command:
          'rsync -r public/* ../public/sites/all/themes/gesso/pattern-lab'
      },
      // Generate patterns & use native watch/live reload feature
      patternlabWatchReload: {
        command: [
          'php core/builder.php -wr',
        ].join('&&')
      },
    },

    // Watch files for changes and runs tasks based on the changed files
    watch: {
      gruntfiles : {
        files : ['Gruntfile.js', 'grunt/*.js'],
        tasks : []
      },

      javascript : {
        files : ['source/js/**/*.js', '../public/sites/all/themes/grand-challenges/js/**/*.js'],
        tasks : ['optimize-js']
      },

      patternlabSass: {
        files: [
          'source/sass/**/*.scss'
        ],
        tasks: [
          'compass:patternlab'
        ],
        options: {
          spawn: false,
          // livereload: true
        }
      },

      themeSass: {
        files: [
          '../public/sites/all/themes/grand-challenges/sass/*.scss',
          '../public/sites/all/themes/grand-challenges/sass/**/*.scss'
        ],
        tasks: ['compass:dev'],
        options: {
          spawn: false,
          // livereload: true
        }
      }
    },

  });

  grunt.registerTask('default', [
    'concurrent:patternlab',
  ]);

};








