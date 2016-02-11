Feature: Check that rules works properly

  @api @content @javascript
  Scenario: As an Administrator I want to make sure that a rule works properly
    Given I run drush "en rules rules_admin entity entity_token -y"
    Given I run drush "rap 'administrator' 'administer rules'"
    Given I am logged in as a user with the "administrator" role
    Then I delete the rule my user created
    When I visit "/admin/config/workflow/rules/reaction/add"
    Then I fill in "Name" with "Test Rule"
    Given I select "User has logged in" from "React on event" chosen.js select box
    Then I press "Save"
    Then I should see text matching "Your changes have been saved."
    Then I follow "Add action"
    Given I select "Show a message on the site" from "Select the action to add" chosen.js select box
    Then I wait for 2 seconds
    Then I fill in "edit-parameter-message-settings-message" with "Test Rule Message"
    Then I press "Save"
    Given I am logged in as a user with the "administrator" role
    Then I should see the text "Test Rule Message"
    Then I delete the rule my user created


