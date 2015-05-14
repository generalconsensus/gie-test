module.exports = function(grunt) {
  // Load grunt tasks automatically
  require('load-grunt-tasks')(grunt);

  grunt
      .initConfig({
        pkg : grunt.file.readJSON('package.json'),
        compass : { // Task
          patternlab: {
            options: {
              basePath: 'public/sites/all/themes/gesso/',
              bundleExec: true,  // use Bundler specified versions
              outputStyle: 'expanded',
            },
          },
          patternlablite: {
            options: {
              basePath: 'public/sites/all/themes/gesso/',
              bundleExec: true,  // use Bundler specified versions
              outputStyle: 'expanded',
              specify: ['public/sites/all/themes/gesso/sass/*.scss'], // only compile primary files
            },
          },
          dev : { // Target
            options : { // Target options
              basePath: 'public/sites/all/themes/gesso/',
              outputStyle: 'expanded',
              noLineComments: false,
              bundleExec: true
            }
          },
          staging : { // Target
            options : { // Target options
              basePath: 'public/sites/all/themes/gesso/',
              outputStyle: 'compressed',
              noLineComments: true,
              force: true,
              bundleExec: true
            }
          },
        },
        watch : {
          compass : {
            files : [ 'public/sites/all/themes/gesso/sass/*.scss', 'public/sites/all/themes/gesso/sass/**/*.scss' ],
            tasks : [ 'compass:dev' ]
          },
          patternlabSass: {
            files: [
              'public/sites/all/themes/gesso/sass/**/*.scss'
            ],
            tasks: [
              'compass:patternlab'
            ],
            options: {
              spawn: false,
              // livereload: true
            },
          },
          patternlabliteSass: {
            files: [
              'public/sites/all/themes/gesso/sass/**/*.scss'
            ],
            tasks: [
              'compass:patternlablite'
            ],
            options: {
              spawn: false,
              // livereload: true
            }
          },
        },
        concurrent: {
          patternlab: {
            tasks: [
              'shell:patternlabWatchReload',
              'simple-watch:patternlabSass'
            ],
            options: {
              logConcurrentOutput: true
            }
          },
          patternlablite: {
            tasks: [
              'shell:patternlabWatchReload',
              'simple-watch:patternlabliteSass'
            ],
            options: {
              logConcurrentOutput: true
            }
          },
        },
        shell: {
          // Generate patterns & use native watch/live reload feature
          patternlabWatchReload: {
            command: [
              'php public/sites/all/themes/gesso/patternlab/core/builder.php -wr',
            ].join('&&')
          },
        }
      });

  var stage = grunt.option('stage') || 'dev';

  grunt.registerTask('default', [ ]);
  grunt.registerTask('patternlab', ['compass:patternlab', 'concurrent:patternlab']);
  grunt.registerTask('patternlablite', ['compass:patternlablite', 'concurrent:patternlablite']);
};
