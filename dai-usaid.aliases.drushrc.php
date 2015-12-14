<?php
$aliases['local'] = array(
  'parent' => '@parent',
  'uri' => 'http://10.11.12.14',
  'root' => '/vagrant/public',
  'remote-host' => '10.11.12.14',
  'remote-user' => 'vagrant',
  'ssh-options' => "-i ~/.vagrant.d/insecure_private_key -l vagrant",
  'db-url' => 'mysql://web:web@10.11.12.14:3306/web',
  'databases' => array (
    'default' => array (
      'default' => array (
        'database' => 'web',
        'username' => 'web',
        'password' => 'web',
        'host' => '10.11.12.14',
        'port' => '',
        'driver' => 'mysql',
        'prefix' => '',
      ),
    ),
  ),
);

$aliases['dev'] = array(
  'uri' => 'dev.gie.byf1.io',
  'root' => '/var/www/vhosts/gie.dev/public',
  'remote-host' => 'dev.gie.byf1.io',
  'remote-user' => 'gie'
);


$aliases['stage'] = array(
  'uri' => 'stage.gie.byf1.io',
  'root' => '/var/www/vhosts/gie.stage/public',
  'remote-host' => 'stage.gie.byf1.io',
  'remote-user' => 'gie'
);