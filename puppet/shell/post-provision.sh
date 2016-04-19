#!/bin/bash

VAGRANT_CORE_FOLDER="/vagrant"

if [[ -f "${VAGRANT_CORE_FOLDER}/Gemfile" ]]; then
  echo 'Installing bundler gems'
  su - vagrant -c "cd ${VAGRANT_CORE_FOLDER} && rbenv exec bundle install" >/dev/null
fi

if [[ -f "${VAGRANT_CORE_FOLDER}/package.json" ]]; then
  echo 'Installing NPM packages'
  su - vagrant -c "cd ${VAGRANT_CORE_FOLDER} && npm install --silent --no-bin-links" >/dev/null
fi

if [[ -f "${VAGRANT_CORE_FOLDER}/bower.json" ]]; then
  echo 'Installing bower packages'
  su - vagrant -c "cd ${VAGRANT_CORE_FOLDER} && bower install" >/dev/null
fi

if [[ -f "${VAGRANT_CORE_FOLDER}/puppet/shell/custom/post-provision.sh" ]]; then
  source ${VAGRANT_CORE_FOLDER}/puppet/shell/custom/post-provision.sh
fi;

#install xhprof
echo 'Install xhprof'
yum install php55u-devel.x86_64 -y
pecl install xhprof-beta
yum install graphviz -y
if [[ -f "/usr/lib64/php/modules/xhprof.so" ]]; then
  chmod ugo+x /usr/lib64/php/modules/xhprof.so
fi
if [[ ! -f "/etc/php.d/xhprof.ini" ]]; then
  echo 'Creating xhprof.ini file'
  echo '[xhprof]' > /etc/php.d/xhprof.ini
  echo 'extension=xhprof.so' >> /etc/php.d/xhprof.ini
  echo 'xhprof.output_dir="/var/tmp/xhprof"' >> /etc/php.d/xhprof.ini
fi
if [[ ! -d "/var/tmp/xhprof" ]]; then
  echo 'Creating xhprof directory'
  mkdir /var/tmp/xhprof
  chmod 777 /var/tmp/xhprof
fi
