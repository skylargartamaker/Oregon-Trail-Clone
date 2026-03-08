#include "Character.h"

Character::Character()
{
  food = 0;
  ammo = 0;
  money = 0;
  health = 100;
  miles = 0;
  leader = false; 
}

void Character::setName(std::string playerName)
{
  name = playerName;
}

std::string Character::getName()
{
  return name; 
}

void Character::setMoney(int moneyCount) 
{
  money = moneyCount;
}

int Character::getMoney() 
{
  return money;
}

void Character::setBanker()
{ 
  setMoney(1600);
}

void Character::setCarpenter()
{
  setMoney(800);
}

void Character::setFarmer()
{
  setMoney(400);
}
