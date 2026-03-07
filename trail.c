#include <stdio.h>

struct Player
{
  int food;
  int ammo;
  int money;
  int health;
  int miles;
};








void farmer(struct Player mainPlayer)
{
  
}

void pickCharacter(struct Player mainPlayer)
{
  char banker[] = "Banker"; //Easy mode 
  char carpenter[] = "Carpenter"; //Regular mode
  char farmer[] = "Farmer"; //Hard mode

  int choice;

  printf("Many kinds of people made the trip to Oregon.\n");
  printf("You may:\n");
  printf("\t1. Be a banker from Boston\n");
  printf("\t2. Be a carpenter from Ohio\n");
  printf("\t3. Be a farmer from Illinois\n");
  printf("\t4. Find out the differences between these choices\n\n");
  printf("What is your choice?: ");
  scanf("%d", choice);

  switch (choice)
  {
    case 1:
      break;
    case 2:
      break;
    case 3:
      break;
    case 4:
      break;
    default:
      printf("Not a valid choice\n");
      break;
  }
}



int main(void)
{
  int milesTraveled = 0;
  bool isAlive = true;

  while (milesTraveled < 2000 && isAlive)
  {
    
  }
  return 0;
}
