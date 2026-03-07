#include <iostream>
#include <string>
#include <cstdlib>
#include <vector>


/*** Player Class ***/
class Player
{
private:
  std::string name;
  int food;
  int ammo;
  int money;
  int health;
  int miles;

public:
  Player();

  void setName(std::string playerName);
  std::string getName();

  void setBanker();
  void setCarpenter();
  void setFarmer();

  void printStats();
};

Player::Player()
{
  food = 0;
  ammo = 0;
  money = 0;
  health = 100;
  miles = 0;
}

void Player::setName(std::string playerName)
{
  name = playerName;
}

std::string Player::getName()
{
  return name;
}

void Player::setBanker()
{
  money = 1600;
}

void Player::setCarpenter()
{
  money = 800;
}

void Player::setFarmer()
{
  money = 400;
}

/*** Party Class ***/

class PartyMember
{
private:
  std::string name;
  int health;

public:
  PartyMember();
  
  void setName(std::string n);
  std::string getName();

  int getHealth();
  void setHealth(int h);
};

PartyMember::PartyMember()
{
  health = 100;
}

void PartyMember::setName(std::string n)
{
  name = n;
}

std::string PartyMember::getName()
{
  return name;
}

int PartyMember::getHealth()
{
  return health;
}

void PartyMember::setHealth(int h)
{
  health = h;
}
/*** Game Class **/

class Game
{
private:
  Player player;
  std::vector<PartyMember> party;

public:
  void clearScreen();
  void pickCharacter();
  void createParty();
  void sceneOne();
  void start();
};

void Game::clearScreen()
{
  #ifdef _WIN32
    system("cls");
  #else
    system("clear");
  #endif
}

void Game::createParty()
{
  std::string name;
  party.clear();
  int i, j;

  PartyMember leader;
  leader.setName(player.getName());
  party.push_back(leader);

  for (i = 0; i < 4; i++)
  {
    clearScreen();

    std::cout << "What are the first names of the\n";
    std::cout << "four other members in your party?\n\n";

    for (j = 0; j < party.size(); j++)
    {
      std::cout << j + 1 << ". " << party[j].getName() << "\n";
    }

    std::cout << "\nEnter name: ";
    std::cin >> name;

    PartyMember member;
    member.setName(name);

    party.push_back(member);
  }
}

void Game::pickCharacter()
{
  int choice = 0;
  std::string name;
  bool breakLoop = true;

  while (breakLoop)
  {
    clearScreen();

    std::cout << "Many kinds of people made the trip to Oregon.\n";
    std::cout << "You may:\n\n";
    std::cout << "\t1. Be a banker from Boston\n";
    std::cout << "\t2. Be a carpenter from Ohio\n";
    std::cout << "\t3. Be a farmer from Illinois\n";
    std::cout << "\t4. Find out the differences\n";
    std::cout << "\t   between these choices\n\n";
    std::cout << "What is your choice?: ";
    std::cin >> choice;

    switch (choice)
    {
      case 1:
        player.setBanker();
        breakLoop = false;
        break;

      case 2:
        player.setCarpenter();
        breakLoop = false;
        break; 

      case 3:
        player.setFarmer();
        breakLoop = false;
        break;

      case 4:
        clearScreen();
        std::cout << "Traveling to Oregon isn't easy!\n";
        std::cout << "But if you're a banker, you'll\n";
        std::cout << "have more money for supplies\n";
        std::cout << "and services than a carpenter\n";
        std::cout << "or a farmer.\n\n";
        std::cout << "However, the harder you have\n";
        std::cout << "to try, the more points you\n";
        std::cout << "deserve! Therefore, the\n";
        std::cout << "farmer earns the greatest\n";
        std::cout << "number of points and the\n";
        std::cout << "banker earns the least.\n\n";
        std::cout << "Press ENTER to continue";
        std::cin.ignore();
        std::cin.get();
        break;

      default:
        std::cout << "Invalid choice.\n";
        break;
    }
  }
  clearScreen();
  std::cout << "What is the first name of the\n";
  std::cout << "wagon leader?: ";
  std::cin >> name;
  player.setName(name);
}

void Game::sceneOne()
{
  int choice;
  bool breakLoop = true;

  while (breakLoop)
  {
    clearScreen();
    std::cout << "It is 1848. Your jumping off\n";
    std::cout << "place for Oregon is Independence,\n";
    std::cout << "Missouri. You must decide which\n";
    std::cout << "month to leave Independence.\n\n";
    std::cout << "\t1. March\n";
    std::cout << "\t2. April\n";
    std::cout << "\t3. May\n";
    std::cout << "\t4. June\n";
    std::cout << "\t5. July\n";
    std::cout << "\t6. Ask for advice\n\n";
    std::cout << "What is your choice?: ";
    std::cin >> choice;

    switch (choice)
    {
      //I need to make some difficulty choices here
      case 1:
        breakLoop = false;
        break;
      case 2:
        breakLoop = false;
        break;
      case 3:
        breakLoop = false;  
        break;
      case 4:
        breakLoop = false;
        break;
      case 5:
        breakLoop = false; 
        break;
      case 6:
        clearScreen();
        std::cout << "You attend a public meeting held\n";
        std::cout << "for \"folks with the California -\n";
        std::cout << "Oregon fever.\" You're told:\n\n";
        std::cout << "if you leave too early, there\n";
        std::cout << "won't be any grass for your\n";
        std::cout << "oxen to eat. If you leave too\n";
        std::cout << "late, you may not get to Oregon\n";
        std::cout << "before winter comes. If you\n";
        std::cout << "leave at just the right time,\n";
        std::cout << "there will be green grass and\n";
        std::cout << "the weather will still be cool.\n\n";
        std::cout << "Press ENTER to continue";
        std::cin.ignore();
        std::cin.get();
        break;
      default:
        std::cout << "Invalid option";
    }
  }
}

void Game::start()
{
  pickCharacter();
  createParty();
  sceneOne();
}

int main()
{
  Game game;
  game.start();

  return 0;
}

