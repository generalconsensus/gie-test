module.exports = function(grunt) {
  grunt.config.merge({
    concat: {
      gieDataViz: {
        src: ['public/sites/all/modules/custom/gie_data_viz/app/src/**/*.js'],
        dest: 'public/sites/all/modules/custom/gie_data_viz/app/build/<%= pkg.name %>.js'
      }
    }
  });
  grunt.loadNpmTasks('grunt-contrib-concat');
};