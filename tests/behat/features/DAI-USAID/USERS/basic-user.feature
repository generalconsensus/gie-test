Feature: I want to test basic user functionality

  @api
  Scenario: As an administrator I want to create and apply all available roles to users
    Given users:
      | name            | mail              | roles                     | pass  |
      | Intern_Test     | intern@bar.com    | Intern                    | test  |
      | Location_Test   | location@bar.com  | Location Manager          | test  |
      | Microsite_Test  | microsite@bar.com | Microsite Administrator   | test  |
      | Program_Test    | program@bar.com   | Program Community Manager | test  |
      | Sector_Test     | sector@bar.com    | Sector Manager            | test  |
      | Topic_Test      | topic@bar.com     | Topic Manager             | test  |


  @api
  Scenario: As an administrator I want to create authenticated users and than apply roles to them
    Given users:
      | name                 | mail                               | roles               | pass  |
      | 66766732Intern_Test  | 15777515132intern24@bar.com        | authenticated user  | test  |
      | 66732Location_Test   | 151777location24@bar.com           | authenticated user  | test  |
      | 66732Microsite_Test  | 151777microsite24@bar.com          | authenticated user  | test  |
      | 66732Program_Test    | 151777program24@bar.com            | authenticated user  | test  |
      | 667311Sector_Test    | 151777sector24@bar.com             | authenticated user  | test  |
      | 66732Topic_Test      | 1517772topic24@bar.com             | authenticated user  | test  |
    Given I am logged in as a user with the "administrator" role
    Then I will visit the user edit screen and apply a new role to each user