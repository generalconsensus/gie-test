Feature: Create innovation content test

  @api @content @javascript
  Scenario: As an Administration user I want to make sure that the Innovation content type is created properly
    Given I am logged in as a user with the "administrator" role
    When I visit "node/add/funding"
    Then I should see the text "Create Funding Ops"
    Then I should see the text "About your Funding Opportunity"
    Then I fill in "edit-title-field-und-0-value" with "Test Funding 8787"
    Then I fill in "Grant / Award Value" with "100000000"
    Then I fill in CKEditor field "edit-field-funding-desc-und-0-value" with "blunderbuss"
    Then I fill in "Application URL" with "http://www.test.com"
    Then I fill in "Date" with "06/30/2016"
    Then I check the box "edit-field-term-sector-und-0-446-446"
    Given I select "Organization" from "edit-field-funding-eligibility-type-und" chosen.js autoselect box
    Given I select "Contract" from "edit-field-funding-type-und" chosen.js autoselect box
    Given I select "Global" from "edit-field-term-region-und" chosen.js autoselect box
    Given I select "Global" from "edit-field-term-country-und" chosen.js autoselect box
    Then I press "Save"
    Then I should see "Funding Ops Test Funding 8787 has been created"
    When I visit "funding/sector/other-446"
    Then I should see "Test Funding 8787"

