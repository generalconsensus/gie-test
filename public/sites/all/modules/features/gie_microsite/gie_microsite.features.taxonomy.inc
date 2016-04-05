<?php
/**
 * @file
 * gie_microsite.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function gie_microsite_taxonomy_default_vocabularies() {
  return array(
    'background' => array(
      'name' => 'Microsite Background',
      'machine_name' => 'background',
      'description' => 'Background color pallete',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
    'block_orientation' => array(
      'name' => 'Microsite Block Orientation',
      'machine_name' => 'block_orientation',
      'description' => 'This taxonomy is for use with the Microsite paragraph type 5050 block. Values here are to set the configuration for 5050 types.',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
    'microsite_header_options' => array(
      'name' => 'Microsite Header Options',
      'machine_name' => 'microsite_header_options',
      'description' => 'These options are for the microsite functionality and the paragraph type Microsite Header',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
    'text_orientation' => array(
      'name' => 'Microsite Text Orientation',
      'machine_name' => 'text_orientation',
      'description' => 'Microsite Text Orientation',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}
