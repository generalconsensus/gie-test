<?php
/**
 * @file
 * gie_domain.domains.inc
 */

/**
 * Implements hook_domain_default_domains().
 */
function gie_domain_domain_default_domains() {
  $domains = array();
  $domains['asean_globalinnovationexchange_org'] = array(
    'subdomain' => 'asean.globalinnovationexchange.org',
    'sitename' => 'ASEAN',
    'scheme' => 'http',
    'valid' => 1,
    'weight' => 7,
    'is_default' => 0,
    'machine_name' => 'asean_globalinnovationexchange_org',
  );
  $domains['australia'] = array(
    'subdomain' => 'australia.globalinnovationexchange.org',
    'sitename' => 'Australia',
    'scheme' => 'http',
    'valid' => 1,
    'weight' => 13,
    'is_default' => 0,
    'machine_name' => 'australia',
  );
  $domains['citizenscience_globalinnovationexchange_org'] = array(
    'subdomain' => 'citizenscience.globalinnovationexchange.org',
    'sitename' => 'Citizen Science',
    'scheme' => 'http',
    'valid' => 1,
    'weight' => 3,
    'is_default' => 0,
    'machine_name' => 'citizenscience_globalinnovationexchange_org',
  );
  $domains['diaspora_globalinnovationexchange_org'] = array(
    'subdomain' => 'diaspora.globalinnovationexchange.org',
    'sitename' => 'Diaspora',
    'scheme' => 'http',
    'valid' => 1,
    'weight' => 2,
    'is_default' => 0,
    'machine_name' => 'diaspora_globalinnovationexchange_org',
  );
  $domains['digitalfinance_globalinnovationexchange_org'] = array(
    'subdomain' => 'digitalfinance.globalinnovationexchange.org',
    'sitename' => 'Digital Finance',
    'scheme' => 'http',
    'valid' => 1,
    'weight' => 4,
    'is_default' => 0,
    'machine_name' => 'digitalfinance_globalinnovationexchange_org',
  );
  $domains['divportfolio_org'] = array(
    'subdomain' => 'www.divportfolio.org',
    'sitename' => 'DIV',
    'scheme' => 'http',
    'valid' => 1,
    'weight' => 1,
    'is_default' => 0,
    'machine_name' => 'divportfolio_org',
  );
  $domains['hesntechcon_globalinnovationexchange_org'] = array(
    'subdomain' => 'hesntechcon.com',
    'sitename' => 'HESNTechCon',
    'scheme' => 'http',
    'valid' => 1,
    'weight' => 11,
    'is_default' => 0,
    'machine_name' => 'hesntechcon_globalinnovationexchange_org',
  );
  $domains['idia'] = array(
    'subdomain' => 'idia.globalinnovationexchange.org',
    'sitename' => 'IDIA',
    'scheme' => 'http',
    'valid' => 1,
    'weight' => 12,
    'is_default' => 0,
    'machine_name' => 'idia',
  );
  $domains['launch'] = array(
    'subdomain' => 'launch.globalinnovationexchange.org',
    'sitename' => 'LAUNCH',
    'scheme' => 'http',
    'valid' => 1,
    'weight' => 10,
    'is_default' => 0,
    'machine_name' => 'launch',
  );
  $domains['sawit_globalinnovationexchange_org'] = array(
    'subdomain' => 'sawitchallenge.org',
    'sitename' => 'SAWIT',
    'scheme' => 'http',
    'valid' => 1,
    'weight' => 5,
    'is_default' => 0,
    'machine_name' => 'sawit_globalinnovationexchange_org',
  );
  $domains['tantangansawit_globalinnovationexchange_org'] = array(
    'subdomain' => 'tantangansawit.org',
    'sitename' => 'SAWIT BAHASA',
    'scheme' => 'http',
    'valid' => 1,
    'weight' => 8,
    'is_default' => 0,
    'machine_name' => 'tantangansawit_globalinnovationexchange_org',
  );
  $domains['un_sti_forum'] = array(
    'subdomain' => 'stisolutions4sdgs.globalinnovationexchange.org',
    'sitename' => 'STI Solutions 4 SDGS',
    'scheme' => 'http',
    'valid' => 1,
    'weight' => 9,
    'is_default' => 0,
    'machine_name' => 'un_sti_forum',
  );
  $domains['www_globalinnovationexchange_org'] = array(
    'subdomain' => 'www.globalinnovationexchange.org',
    'sitename' => 'Global Innovation Exchange',
    'scheme' => 'http',
    'valid' => 1,
    'weight' => -1,
    'is_default' => 1,
    'machine_name' => 'www_globalinnovationexchange_org',
  );
  $domains['youthpower_globalinnovationexchange_org'] = array(
    'subdomain' => 'youthpower.org',
    'sitename' => 'Youth Power',
    'scheme' => 'http',
    'valid' => 1,
    'weight' => 6,
    'is_default' => 0,
    'machine_name' => 'youthpower_globalinnovationexchange_org',
  );

  return $domains;
}

/**
 * Implements hook_domain_alias_default_aliases().
 */
function gie_domain_domain_alias_default_aliases() {
  $domain_aliases = array();
  $domain_aliases['asean_globalinnovationexchange_org'] = array(
    'asean.*' => array(
      'pattern' => 'asean.*',
      'redirect' => 0,
      'machine_name' => 'asean_globalinnovationexchange_org',
    ),
  );
  $domain_aliases['australia'] = array(
    'australia.*' => array(
      'pattern' => 'australia.*',
      'redirect' => 0,
      'machine_name' => 'australia',
    ),
  );
  $domain_aliases['citizenscience_globalinnovationexchange_org'] = array(
    'citizenscience.*' => array(
      'pattern' => 'citizenscience.*',
      'redirect' => 0,
      'machine_name' => 'citizenscience_globalinnovationexchange_org',
    ),
  );
  $domain_aliases['diaspora_globalinnovationexchange_org'] = array(
    'diaspora.*' => array(
      'pattern' => 'diaspora.*',
      'redirect' => 0,
      'machine_name' => 'diaspora_globalinnovationexchange_org',
    ),
  );
  $domain_aliases['digitalfinance_globalinnovationexchange_org'] = array(
    'digitalfinance.*' => array(
      'pattern' => 'digitalfinance.*',
      'redirect' => 0,
      'machine_name' => 'digitalfinance_globalinnovationexchange_org',
    ),
  );
  $domain_aliases['divportfolio_org'] = array(
    'div.*' => array(
      'pattern' => 'div.*',
      'redirect' => 0,
      'machine_name' => 'divportfolio_org',
    ),
  );
  $domain_aliases['hesntechcon_globalinnovationexchange_org'] = array(
    'hesntechcon.*' => array(
      'pattern' => 'hesntechcon.*',
      'redirect' => 0,
      'machine_name' => 'hesntechcon_globalinnovationexchange_org',
    ),
  );
  $domain_aliases['idia'] = array(
    'idia.*' => array(
      'pattern' => 'idia.*',
      'redirect' => 0,
      'machine_name' => 'idia',
    ),
  );
  $domain_aliases['launch'] = array(
    'launch.*' => array(
      'pattern' => 'launch.*',
      'redirect' => 0,
      'machine_name' => 'launch',
    ),
  );
  $domain_aliases['sawit_globalinnovationexchange_org'] = array(
    'sawitchallenge.*' => array(
      'pattern' => 'sawitchallenge.*',
      'redirect' => 0,
      'machine_name' => 'sawit_globalinnovationexchange_org',
    ),
  );
  $domain_aliases['tantangansawit_globalinnovationexchange_org'] = array(
    'tantangansawit.*' => array(
      'pattern' => 'tantangansawit.*',
      'redirect' => 0,
      'machine_name' => 'tantangansawit_globalinnovationexchange_org',
    ),
  );
  $domain_aliases['un_sti_forum'] = array(
    'stisolutions4sdgs.*' => array(
      'pattern' => 'stisolutions4sdgs.*',
      'redirect' => 0,
      'machine_name' => 'un_sti_forum',
    ),
  );
  $domain_aliases['www_globalinnovationexchange_org'] = array();
  $domain_aliases['youthpower_globalinnovationexchange_org'] = array(
    'youthpower.*' => array(
      'pattern' => 'youthpower.*',
      'redirect' => 0,
      'machine_name' => 'youthpower_globalinnovationexchange_org',
    ),
  );

  return $domain_aliases;
}
