module.exports = function(grunt) {
  // Load grunt tasks automatically
  require('load-grunt-tasks')(grunt);

  grunt
      .initConfig({
        pkg : grunt.file.readJSON('package.json'),
        compass : { // Task
          patternlab: {
            options: {
              basePath: 'patternlab/source',
              bundleExec: true,  // use Bundler specified versions
              outputStyle: 'expanded',
            },
          },
          dev : { // Target
            options : { // Target options
              basePath: 'public/sites/all/themes/f1ux/',
              outputStyle: 'expanded',
              noLineComments: false,
              bundleExec: true
            }
          },
          staging : { // Target
            options : { // Target options
              basePath: 'public/sites/all/themes/f1ux/',
              outputStyle: 'compressed',
              noLineComments: true,
              force: true,
              bundleExec: true
            }
          },
        },
        watch : {
          compass : {
            files : [ 'public/sites/all/themes/f1ux/sass/*.scss', 'public/sites/all/themes/f1ux/sass/**/*.scss' ],
            tasks : [ 'compass:dev' ]
          },
          patternlabSass: {
            files: [
              'patternlab/source/sass/**/*.scss'
            ],
            tasks: [
              'compass:patternlab'
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
              'watch:patternlabSass'
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
              'php patternlab/core/builder.php -wr',
            ].join('&&')
          },
        }
      });

  var stage = grunt.option('stage') || 'dev';

  grunt.registerTask('default', [ ]);
  grunt.registerTask('patternlab', ['compass:patternlab', 'concurrent:patternlab']);
};
