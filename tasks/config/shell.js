module.exports = function(grunt) {
  grunt.config.merge({
    shell : {
      patternlab: {
        command : 'php core/builder.php -g',
        options : {
          execOptions : {
            cwd : '<%= pkg.themePath %>/patternlab'
          }
        }
      },
      longform_patternlab: {
        command : 'php core/builder.php -g',
        options : {
          execOptions : {
            cwd : '<%= pkg.longformThemePath %>/patternlab'
          }
        }
      }
    }
  });

  grunt.loadNpmTasks('grunt-shell');
}
