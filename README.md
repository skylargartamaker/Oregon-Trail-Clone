I'm making an Oregon Trail clone to learn about some game development principles. 
I want to share some of the things I've learned along the way that will be here, as well as in learned.txt

Day 1: Set up main game loop and created a player structure. I plan on expanding on this as I continue the project

Day 2: I added some stuff for the intro and switched to c++. The game now asks for your name and the name of your party members, lets you pick the month you want to leave, as well as your profession. I restructured the code to be in multiple files as it was getting a little unruly with over 300 lines in one file. I plan on implimenting the store system next where you can purchase food, clothing, spare parts, etc. I learned a lot about classes and getters and setters today. For example:
  If you pick the banker
    Set initial money to $1600
    Get that value any time you need to reference it
Once I get the store up and running I'm going to need to use the setter for money quite a bit. I need to do some research on the best way to create an inventory. Right out of the gate I'm thinking because there are so few items I will make a class with all of the items in the game, then increment the total number of those items when purchased, and decrement it when used. 
