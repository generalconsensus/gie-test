<?php
/**
 * @file
 * gie_needs.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function gie_needs_taxonomy_default_vocabularies() {
  return array(
    'needs_duration' => array(
      'name' => 'Needs Duration',
      'machine_name' => 'needs_duration',
      'description' => 'This is the duration list for the Needs content type, powering the InDemand section',
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
    'needs_status' => array(
      'name' => 'Needs Status',
      'machine_name' => 'needs_status',
      'description' => 'This is the Status of the Need for the InDemand Section',
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
    'needs_type' => array(
      'name' => 'Needs Type',
      'machine_name' => 'needs_type',
      'description' => 'This is the taxonomy that provides the Needs type for the InDemand section of the website.',
      'hierarchy' => 1,
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
