Feature: Create organization content test

  @api @content @javascript
  Scenario: As an Administration user I want to make sure that the organization content type is created properly
    Given I am logged in as a user with the "administrator" role
    When I visit "node/add/organization"
    Then I should see the text "Create Organization"
    Then I should see the text "General Information"
    Then I fill in "Organization Title" with "Test Organization 8787"
    Then I fill in CKEditor field "edit-field-org-address-und-0-value" with "blunderbuss"
    Then I check the box "Agriculture"
    Given I select "Global" from "edit-field-term-region-und" chosen.js autoselect box
    Then I press "Save"
    Then I should see "Organization Test Organization 8787 has been created"
    When I visit "organizations"
    Then I break
    Then I should see "Test Organization 8787"


