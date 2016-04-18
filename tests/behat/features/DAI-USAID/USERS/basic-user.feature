Feature: I want to test basic user functionality

  @api @javascript
  Scenario: As an administrator I want to create and apply a role to a user
    Given I am logged in as a user with the "administrator" roles
    Given users:
      | name      | mail         | roles        |
      | test      | foo@bar.com  | Intern       |