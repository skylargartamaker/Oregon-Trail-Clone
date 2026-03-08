#ifndef CHARACTER_H
#define CHARACTER_H

#include <string>

class Character
{
private:
  std::string name;
  int food;
  int ammo;
  int money;
  int health;
  int miles;
  bool leader;
public:
  Character();

  void setName(std::string playerName);
  std::string getName();

  void setBanker();
  void setCarpenter();
  void setFarmer();

  int getHealth();
  void setHealth(int h);

  void setLeader(bool l);
  void isLeader();

  int getMoney();
  void setMoney(int moneyCount);
};

#endif
