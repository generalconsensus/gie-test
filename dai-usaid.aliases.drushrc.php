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
  'uri' => 'dev.giexchange.forumone.com',
  'root' => '/var/www/vhosts/giexchange.dev/public',
  'remote-host' => 'dev.giexchange.forumone.com',
  'remote-user' => 'giexchange',
  'path-aliases' => array(
    '%files' => 'sites/default/files',
  ),
  'command-specific' => array(
    'rsync' => array ( 
      'mode' => 'rzv'
    ),
  ),  
);


$aliases['stage'] = array(
  'uri' => 'stage.giexchange.forumone.com',
  'root' => '/var/www/vhosts/giexchange.stage/public',
  'remote-host' => 'stage.giexchange.forumone.com',
  'remote-user' => 'giexchange',
  'command-specific' => array(
    'rsync' => array (
      'mode' => 'rzv'
    ),
  ),
);

/*

$aliases['prod'] = array(
  'uri' => 'www.example.com',
  'root' => '/var/www/vhosts/example.www/public',
  'remote-host' => 'www.example.com',
  'remote-user' => 'example',
  'command-specific' => array(
    'rsync' => array (
      'mode' => 'rzv'
    ),
  ),
);
*/
