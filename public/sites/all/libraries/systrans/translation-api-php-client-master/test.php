<?php

/*
 * This file is part of the Behat.
 * (c) Konstantin Kudryashov <ever.zet@gmail.com>
 *
 * For the full copyright and license information, please view the LICENSE
 * file that was distributed with this source code.
 */

function includeIfExists($file)
{
  if (file_exists($file)) {
    return include $file;
  }
}

if ((!$loader = includeIfExists(__DIR__.'autoload.php')) && (!$loader = includeIfExists(__DIR__.'/autoload.php'))) {
  die(
    'You must set up the project dependencies, run the following commands:'.PHP_EOL.
    'curl -s http://getcomposer.org/installer | php'.PHP_EOL.
    'php composer.phar install'.PHP_EOL
  );
}

$app = new \Systran\Client\ApiClient();
$app->getConfig()->setApiKey('default', '47b50569-d36b-4987-a091-232aa3302437');
$app->getConfig()->setCurlTimeout(60);
$app->getConfig()->setStopCurlSSLVerify(TRUE);
$app->getConfig()->setDebug(TRUE);
$app->getConfig()->setDebugFile('TEMP');
$app->getConfig()->setHost('https://ssi-usaid-01.systran.us:8904/');
$queryParams = [
  'key' => $app->getApiKeyWithPrefix('default'),
  'source' => 'en',
  'target' => 'es',
  'input' => 'Hello'
];
$app->getApiKeyWithPrefix('default');
$translation = $app->callApi('translate', 'GET', $queryParams, []);

$test = 1;
//$app->run();

