#include <iostream>
using namespace std;

/*
CSC 134
M5LAB1 - Choose Your Own Adventure
Katherine Jackson
03/26/25
This template serves as a starting point
for your own program. We'll be using
void functions to tell a simple story,
where the user gets to make choices.

You can fork this template by clicking on the name above, then click the three
dots on the top right, and click 'fork repl'. This makes a copy for you to use.
*/

// Function Prototypes
// Any functions you make will need to
// be listed here, in this format, at the top.
// This is so the compiler knows to save
// room for them in the final program.

//choices in the cockpit
void cockpit();
void check_star_map();
void check_fuel_levels();
void fly_ship();
void explore_ship();

//choices when exploring the ship
void door_1();
void door_2();
void door_3();
void door_4();
void end_of_hall();

//choices when flying the ship
void landing();
void enter_orbit();

//choices in room 1/room 2
void search_bunks();

//choices in room 3
void check_cabinets();


int main() 
{
  cout << "M5LAB1 - Choose Your Own Adventure" << endl;
  // load up the main menu
  cockpit();
  // when we return here, we're done
  cout << "Thanks for playing!" << endl;
  return 0; // finished with no errors
}

void cockpit() 
{
  // Write a simple menu that lets the user choose 1,2, or 3, or 4 to quit.
  cout << "Your ship drifts helplessly through space..." << endl;
  cout << "Do you:" << endl;
  cout << "1. Check the star map" << endl;
  cout << "2. Check the fuel levels" << endl;
  cout << "3. Explore the rest of the ship" << endl;
  cout << "4. [Quit]" << endl;
  cout << "Choose: ";
  int choice;
  cin >> choice;
  if (1 == choice) 
  {
    check_star_map();
  } 
  else if (2 == choice) 
  {
    check_fuel_levels();
  } 
  else if (3 == choice) 
  {
    explore_ship();
  } 
  else if (4 == choice) 
  {
    cout << "Ok, quitting game" << endl;
    return; // go back to main()
  } 
  else 
  {
    cout << "That's not a valid choice, please try again." << endl;
    cin.ignore(); // clear the user input
    cockpit();  // try again
  }
}

// FUNCTION DEFINITIONS
// OK, we have the prototypes at the top, but
// now we have to actually write the functions.
// They go here, after main().

//choices in the cockpit
void check_star_map() 
{
  cout << "Check the star map." << endl;
  cout << "There's a planet nearby." << endl;
  cout << "Do you:" << endl;
  cout << "1. Check fuel levels" << endl;
  cout << "2. Fly to the planet" << endl;
  cout << "3. Explore the rest of the ship" << endl;
  int choice;
  cout << "Choose: ";
  cin >> choice;
  if (1 == choice) 
  {
    check_fuel_levels();
  } 
  else if (2 == choice) 
  {
    fly_ship();
  }
  else if (3 == choice) 
  {
    explore_ship();
  }
}

void check_fuel_levels() 
{ 
  cout << "Check the fuel levels." << endl;
  cout << "You have just enough to give the ship some momentum." << endl;
  cout << "Do you:" << endl;
  cout << "1. Boost ship" << endl;
  cout << "2. Explore the rest of the ship" << endl;
  int choice;
  cout << "Choose: ";
  cin >> choice;
  if (1 == choice) 
  {
    fly_ship();
  } 
  else if (2 == choice) 
  {
    explore_ship();
  }
}

void explore_ship() 
{ 
  cout << "You exit the cockpit and find a hallway with four doors." << endl;
  cout << "Do you:" << endl;
  cout << "1. Enter the first door on the left" << endl;
  cout << "2. Enter the first door on the right" << endl;
  cout << "3. Enter the second door on the left" << endl;
  cout << "4. Enter the second door on the right" << endl;
  cout << "5. Go to the end of the hallway" << endl;
  cout << "6. Go back to cockpit" << endl;
  int choice;
  cout << "Choose: ";
  cin >> choice;
  if (1 == choice) 
  {
    door_1();
  } 
  else if (2 == choice) 
  {
    door_2();
  }
  else if (3 == choice)
  {
    door_3();
  }
  else if (4 == choice)
  {
    door_4();
  }
  else if (5 == choice)
  {
    end_of_hall();
  }
  else if (6 == choice)
  {
    cockpit();
  }
}

void fly_ship() 
{ 
  cout << "You sit down in the captain's chair and turn everything on." << endl;
  cout << "The ship burns the rest of the fuel and shuts off." << endl;
  cout << "A light on the console says you still have maneuverability." << endl;
  cout << "You continue to float, now in the direction the ship had been going." << endl;
  cout << "As you float along, you notice a planet below you." << endl;
  cout << "Do you:" << endl;
  cout << "1. Try to land on the planet below" << endl;
  cout << "2. Enter orbit" << endl;
  int choice;
  cout << "Choose: ";
  cin >> choice;
  if (1 == choice) 
  {
    landing();
  } 
  else if (2 == choice) 
  {
    enter_orbit();
  }
}

//choices when exploring the ship
void door_1()
{
  cout << "You enter the first door on the left." << endl;
  cout << "There are two bunks for crew members." << endl;
  cout << "Do you:" << endl;
  cout << "1. Search the bunks" << endl;
  cout << "2. Go back to the hallway" << endl;
  int choice;
  cout << "Choose: ";
  cin >> choice;
  if (1 == choice) 
  {
    search_bunks();
  } 
  else if (2 == choice) 
  {
    explore_ship();
  }
}

void door_2()
{
  cout << "You enter the first door on the right." << endl;
  cout << "There are two bunks for crew members." << endl;
  cout << "Do you:" << endl;
  cout << "1. Search the bunks" << endl;
  cout << "2. Go back to the hallway" << endl;
  int choice;
  cout << "Choose: ";
  cin >> choice;
  if (1 == choice) 
  {
    search_bunks();
  } 
  else if (2 == choice) 
  {
    explore_ship();
  }
}

void door_3()
{
  cout << "You enter the second door on the left." << endl;
  cout << "There is a kitchen and eating area for the crew." << endl;
  cout << "Do you:" << endl;
  cout << "1. Look through the cabinets" << endl;
  cout << "2. Go back to the hallway" << endl;
  int choice;
  cout << "Choose: ";
  cin >> choice;
  if (1 == choice) 
  {
    check_cabinets();
  } 
  else if (2 == choice) 
  {
    explore_ship();
  }
}

void door_4()
{
  cout << "TODO: second door on the right" << endl;
}

void end_of_hall()
{
  cout << "TODO: go to the end of the hallway" << endl;
}

//choices when flying the ship
void landing()
{
  cout << "TODO: land on the planet below" << endl;
}

void enter_orbit()
{
  cout << "You use the maneuvering thrusters to enter orbit around the planet." << endl;
  cout << "There is a kitchen and eating area for the crew." << endl;
  cout << "Do you:" << endl;
  cout << "1. Look through the cabinets" << endl;
  cout << "2. Go back to the hallway" << endl;
  int choice;
  cout << "Choose: ";
  cin >> choice;
  if (1 == choice) 
  {
    check_cabinets();
  } 
  else if (2 == choice) 
  {
    explore_ship();
  }
}

//choices in room 1/room 2
void search_bunks()
{
  cout << "TODO: search the bunks" << endl;
}

//choices in room 3
void check_cabinets()
{
  cout << "TODO: look through the cabinets" << endl;
}