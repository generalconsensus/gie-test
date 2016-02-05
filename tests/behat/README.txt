BEHAT Testing Platform Instructions

### Instalation ###
1. Install Java for your Platform
2. Install PHP Composer for your Platform (http://getcomposer.org/download/), I suggest you install globally so you can run composer anywhere
3. Run the Composer install from the root of this directory ('php composer.phar install' for a local install of composer, 'composer install' for global)
4. Check that Behat is working properly by running
  a. bin/behat -dl -- this will show a list of possible Steps
5. Start Selenium (optional but recommended: this allows to run tests via the browser)
  a. Use the following commands to bring up the Selenium Hub and Node
    i. java -jar selenium-server-standalone-2.48.2.jar -role hub  -nodeConfig nodeconfig.server.json
    ii. java -jar selenium-server-standalone-2.48.2.jar -role node  -nodeConfig nodeconfig.mac.json
  b. Gotcha: If you want to run Chrome with selenium than you will need to run the 'chromedriver' binary in the console by executing ./chromedriver. Additionally uncomment show_cmd line in the behat.yml and add the location of the Google Chrome executable
  c. Gotcha: For running Firefox, comment out the 'show_cmd' line and replace 'chrome' with 'firefox' in the 'browser:' and 'capabilities:' lines in the behat.yml file 6
6. Check that Behat is able to perform tests by running the following:
  a. bin/behat features/TEST/BACKEND/test.feature  -v'
  b. bin/behat features/TEFRONTEND/login.feature
7. Great you now have Behat working but how do you integrate it with your current local sites and dev sites?
  a. Short answer is through behat profiles in the behat.yml file!
    i. The behat.yml file will change from time to time with a focus on standardization. Be advised that when the wd_host setting is set to:
                  wd_host:              'http://127.0.0.1:5555/wd/hub'
       this means that the requests will be forwarded to selenium and onward to a browser. If the wd_host setting is set to:
                     wd_host:              'http://127.0.0.1:8643/wd/hub'
       this means that the requests will be forwarded to phantomjs
  b. Create a new profile in the behat.yml file by copying the 'default' profile in the behat.yml file and appending it to the bottom of the file
  c. Customize the base_url, log_out, log_in, password_field, username_field and drush->alias values for your site
     i Gotcha: the drush alias must match your drush alias (duh)
     ii. Gotcha: the log_out, log_in, password_field, username_field values must match what the site shows.
         If when you are logged in that the site shows 'Logout' than change the 'log_out' to match or else the Drupal Behat plugin doesn't know if a site login worked.


### Optional PHANTOMJS functionality ###
1. (linux - apt)
   sudo apt-get update
   sudo apt-get install build-essential chrpath libssl-dev libxft-dev
   sudo apt-get install libfreetype6 libfreetype6-dev
   sudo apt-get install libfontconfig1 libfontconfig1-dev
   sudo apt-get install phantomjs
2. (mac - with homebrew)
    a. brew update && brew install phantomjs
3. (run phantomjs)
    a. phantomjs --webdriver=8643
4. (run tests with phantomjs)
    a. bin/behat (insert feature) -p phantomjs

### Optional Mavericks PHP XDEBUG/MSSQL ###
1. You’ll need to download the latest Xcode from the Mac App Store and then run it and install the command line tools in the command line by running (xcode-select --install). This will allow you to build the packages below.

2. We’ll also need autoconf so download the latest source at http://ftp.gnu.org/gnu/autoconf/autoconf-latest.tar.gz.
   At the time this article was published the latest release was v2.69.

   Extract this and then using terminal navigate to the extracted source directory and run the below commands:

   ./configure
   make
   sudo make install


#### GOTCHAS ####
1. Various Behat Drivers have specific browser functionality
2. The default Goutte driver does not allow for checking javascript/ajax functionality. Phantomjs as a headless driver does allow for ajax
3. Make sure to test with phantomjs and selenium2 to be sure of consistency
4. When finished with tests make sure to run a quick load test to be sure that tests are consistent
5. A good example of load testing and being sure that a test will work consistently is to do the following:
   a. Run a Feature file 10 times with both selenium2 and phantomjs
      i. for i in `seq 10`; do ./tests/behat/bin/behat -c ./tests/behat/behat.yml ./tests/behat/features/DAI-USAID/CRUD/innovation.feature ; done && for i in `seq 10`; do ./tests/behat/bin/behat -c ./tests/behat/behat.yml ./tests/behat/features/DAI-USAID/CRUD/innovation.feature -p local-selenium; done
   b. Run a single Scenario file 10 times with both selenium2 and phantomjs
      i. for i in `seq 10`; do ./tests/behat/bin/behat -c ./tests/behat/behat.yml ./tests/behat/features/DAI-USAID/CRUD/innovation.feature:4 ; done && for i in `seq 10`; do ./tests/behat/bin/behat -c ./tests/behat/behat.yml ./tests/behat/features/DAI-USAID/CRUD/innovation.feature:4 -p local-selenium; done
#### TIPS ####
1.