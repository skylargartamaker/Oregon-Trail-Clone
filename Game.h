#ifndef GAME_H
#define GAME_H

#include <vector>
#include "Character.h"

class Game
{
private:
  Character leader;
  std::vector<Character> party;

public:
  void clearScreen();
  void pickCharacter();
  void createParty();
  void sceneOne();
  void start();
};

#endif
