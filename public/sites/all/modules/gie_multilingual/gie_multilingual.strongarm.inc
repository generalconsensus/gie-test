<?php
/**
 * @file
 * gie_multilingual.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function gie_multilingual_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'lingotek_advanced_parsing';
  $strongarm->value = TRUE;
  $export['lingotek_advanced_parsing'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'lingotek_advanced_xml_config1';
  $strongarm->value = 'assumeWellformed: false
preserve_whitespace: true
global_cdata_subfilter: okf_html
attributes:
  xml:lang:
    ruleTypes: [ATTRIBUTE_WRITABLE]
  xml:id:
    ruleTypes: [ATTRIBUTE_ID]
  id:
    ruleTypes: [ATTRIBUTE_ID]
  xml:space:
    ruleTypes: [ATTRIBUTE_PRESERVE_WHITESPACE]
    preserve: [\'xml:space\', EQUALS, preserve]
    default: [\'xml:space\', EQUALS, default]
elements:
  template:
    ruleTypes: [ATTRIBUTES_ONLY]
    translatableAttributes: [displayName]
  pre:
    ruleTypes: [PRESERVE_WHITESPACE]
  bean:
    ruleTypes: [EXCLUDE]
';
  $export['lingotek_advanced_xml_config1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'lingotek_advanced_xml_config2';
  $strongarm->value = 'assumeWellformed: false
preserve_whitespace: true
useCodeFinder: false
attributes:
  dir:
    ruleTypes: [ATTRIBUTE_WRITABLE]
    allElementsExcept: [base, basefront, head, html, meta, param, script]
  title:
    ruleTypes: [ATTRIBUTE_TRANS]
    allElementsExcept: [base, basefront, head, html, meta, param, script, title]
  lang:
    ruleTypes: [ATTRIBUTE_WRITABLE]
  xml:lang:
    ruleTypes: [ATTRIBUTE_WRITABLE]
elements:
  meta:
    ruleTypes: [ATTRIBUTES_ONLY]
    translatableAttributes:
      content:
      - [http-equiv, EQUALS, keywords]
      - - name
        - EQUALS
        - [keywords, description]
    writableLocalizableAttributes:
      content:
      - http-equiv
      - EQUALS
      - [content-language, content-type]
      charset: null
    readOnlyLocalizableAttributes:
      content:
      - name
      - EQUALS
      - [generator, author, progid, date]
  area:
    ruleTypes: [ATTRIBUTES_ONLY]
    translatableAttributes: [accesskey, area, alt]
  isindex:
    ruleTypes: [ATTRIBUTES_ONLY]
    translatableAttributes: [prompt]
  option:
    ruleTypes: [ATTRIBUTES_ONLY]
    translatableAttributes: [label, value]
  optgroup:
    ruleTypes: [ATTRIBUTES_ONLY]
    translatableAttributes: [label]
  address:
    ruleTypes: [TEXTUNIT]
    idAttributes: [id]
  drupalvar:
    ruleTypes: [INLINE]
  dt:
    ruleTypes: [TEXTUNIT]
    idAttributes: [id]
  h1:
    ruleTypes: [TEXTUNIT]
    idAttributes: [id]
  h2:
    ruleTypes: [TEXTUNIT]
    idAttributes: [id]
  h3:
    ruleTypes: [TEXTUNIT]
    idAttributes: [id]
  h4:
    ruleTypes: [TEXTUNIT]
    idAttributes: [id]
  h5:
    ruleTypes: [TEXTUNIT]
    idAttributes: [id]
  h6:
    ruleTypes: [TEXTUNIT]
    idAttributes: [id]
  legend:
    ruleTypes: [TEXTUNIT]
    translatableAttributes: [accesskey]
    idAttributes: [id]
  li:
    ruleTypes: [TEXTUNIT]
    translatableAttributes: [value]
    idAttributes: [id]
  marquee:
    ruleTypes: [TEXTUNIT]
    idAttributes: [id]
  p:
    ruleTypes: [TEXTUNIT]
    idAttributes: [id]
    elementType: paragraph
  pre:
    ruleTypes: [TEXTUNIT, PRESERVE_WHITESPACE]
    idAttributes: [id]
  td:
    ruleTypes: [TEXTUNIT]
    translatableAttributes: [abbr]
    idAttributes: [id]
  th:
    ruleTypes: [TEXTUNIT]
    idAttributes: [id]
    translatableAttributes: [abbr]
  title:
    ruleTypes: [TEXTUNIT]
    idAttributes: [id]
  a:
    ruleTypes: [INLINE]
    elementType: link
    translatableAttributes: [title, accesskey, alt]
  abbr:
    ruleTypes: [INLINE]
  acronym:
    ruleTypes: [INLINE]
  applet:
    ruleTypes: [INLINE]
    translatableAttributes: [alt]
  b:
    ruleTypes: [INLINE]
    elementType: bold
  bdo:
    ruleTypes: [INLINE]
  big:
    ruleTypes: [INLINE]
  blink:
    ruleTypes: [INLINE]
  br:
    ruleTypes: [INLINE]
  button:
    ruleTypes: [INLINE]
    translatableAttributes: [accesskey, value]
  cite:
    ruleTypes: [INLINE]
  code:
    ruleTypes: [INLINE]
  del:
    ruleTypes: [INLINE]
  dfn:
    ruleTypes: [INLINE]
  em:
    ruleTypes: [INLINE]
  embed:
    ruleTypes: [INLINE]
  font:
    ruleTypes: [INLINE]
  i:
    ruleTypes: [INLINE]
    elementType: italic
  iframe:
    ruleTypes: [INLINE]
  img:
    ruleTypes: [INLINE]
    elementType: image
    translatableAttributes: [title, alt]
  input:
    ruleTypes: [INLINE]
    translatableAttributes:
      alt:
      - type
      - NOT_EQUALS
      - [file, hidden, image, Password]
      value:
      - type
      - NOT_EQUALS
      - [file, hidden, image, Password]
      accesskey:
      - type
      - NOT_EQUALS
      - [file, hidden, image, Password]
      title:
      - type
      - NOT_EQUALS
      - [file, hidden, image, Password]
  ins:
    ruleTypes: [INLINE]
  kbd:
    ruleTypes: [INLINE]
  label:
    ruleTypes: [INLINE]
    translatableAttributes: [accesskey]
  map:
    ruleTypes: [INLINE]
  nobr:
    ruleTypes: [INLINE]
  object:
    ruleTypes: [INLINE]
    translatableAttributes: [standby]
  param:
    ruleTypes: [INLINE]
    translatableAttributes: [value]
  q:
    ruleTypes: [INLINE]
  s:
    ruleTypes: [INLINE]
  samp:
    ruleTypes: [INLINE]
  small:
    ruleTypes: [INLINE]
  select:
    ruleTypes: [INLINE]
  span:
    ruleTypes: [INLINE]
  spacer:
    ruleTypes: [INLINE]
  strike:
    ruleTypes: [INLINE]
  strong:
    ruleTypes: [INLINE]
  sub:
    ruleTypes: [INLINE]
  sup:
    ruleTypes: [INLINE]
  symbol:
    ruleTypes: [INLINE]
  table:
    ruleTypes: [ATTRIBUTES_ONLY]
    translatableAttributes: [summary]
  textarea:
    ruleTypes: [INLINE]
    translatableAttributes: [accesskey]
  tt:
    ruleTypes: [INLINE]
  u:
    ruleTypes: [INLINE]
    elementType: underlined
  var:
    ruleTypes: [INLINE]
  wbr:
    ruleTypes: [INLINE]
  ruby:
    ruleTypes: [INLINE]
  rb:
    ruleTypes: [INLINE]
  rt:
    ruleTypes: [INLINE]
  rc:
    ruleTypes: [INLINE]
  rp:
    ruleTypes: [INLINE]
  rbc:
    ruleTypes: [INLINE]
  rtc:
    ruleTypes: [INLINE]
  face:
    ruleTypes: [INLINE]
  style:
    ruleTypes: [EXCLUDE]
  stylesheet:
    ruleTypes: [EXCLUDE]
  script:
    ruleTypes: [EXCLUDE]
';
  $export['lingotek_advanced_xml_config2'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'lingotek_profiles';
  $strongarm->value = array();
  $export['lingotek_profiles'] = $strongarm;

  return $export;
}
