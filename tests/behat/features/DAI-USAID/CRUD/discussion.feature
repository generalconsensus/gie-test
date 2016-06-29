Feature: Create innovation content test

  @api @content @javascript
  Scenario: As an Administration user I want to make sure that the Innovation content type is created properly
    Given I am logged in as a user with the "administrator" role
    When I visit "node/add/discussion"
    Then I should see the text "Create Discussion"
    Then I fill in "Title" with "Test Discussion 9493"
    Then I fill in CKEditor field "edit-field-discussion-desc-und-0-value" with "blunderbuss"
    Given I select "Global" from "edit-field-term-region-und" chosen.js autoselect box
    Given I select "Acceleration" from "edit-field-term-topic-und" chosen.js autoselect box
    Given I select "Agriculture" from "edit-field-term-sector-und" chosen.js autoselect box
    Given I select "Digital Finance" from "edit-field-discussion-program-disc-und" chosen.js autoselect box
    Then I press "Save"
    Then I should see "Discussion Test Discussion 9493 has been created"
    When I visit "topic/acceleration"
    Then I should see "Test Discussion 9493"


