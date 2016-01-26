module.exports = function(grunt) {
  grunt.config.merge({
    uglify: {
      gieDataViz: {
        files: {
          'public/sites/all/modules/custom/gie_data_viz/app/build/<%= pkg.name %>.min.js': ['<%= concat.gieDataViz.dest %>']
        }
      }
    }
  });
  grunt.loadNpmTasks('grunt-contrib-uglify');
};