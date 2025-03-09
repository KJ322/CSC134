/*
CSC134
M3HW - gold (Q3 CYOA)
Jackson K
03/09/25
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() 
{
  //declaring variables
  string choice;

  //retreiving user input
  cout << "You're traveling in the forest, and come across a fork in the road." << endl;
  cout << "The left path looks well trodden and easy to walk." << endl;
  cout << "The right path looks much rougher, and quickly bends out of view behind the underbrush." << endl;
  cout << "Which path do you take? left or right: " << endl;
  cin >> choice;

  //first decision structure.
  if (choice == "left")
  {
    cout << "You choose the left path." << endl; 
    cout << "You have an easy journey, and arrive at your destination quickly." << endl;
    cout << "You get a room at the inn feeling unfulfilled with the lack of adventure in your life." << endl;
  }
  else if (choice == "right")
  {
    cout << "You choose the right path." << endl;
    cout << "You continue down the path for quite some time before anything happens." << endl;
    cout << "You are now face to face with an ancient green dragon." << endl;
    cout << "Do you fight or run? " << endl;
    cin >> choice;
    
    //nested decision structure
    if (choice == "fight")
    {
      cout << "You put up a valient effort, but the dragon is beyond your capabilities." << endl;
      cout << "Game Over" << endl;
    }
    else if (choice == "run")
    {
      cout << "You turn and run away from the dragon. Maybe not the best idea, but it works." << endl;
      cout << "You hide yourself under some bushes and dirt to hide your smell." << endl;
      cout << "The dragon sniffs around, but is unable to find you. It turns and flies away. You live to see another day." << endl;
      cout << "You reach your destination with no other problems." << endl;
    }
  }
  
  

  return 0;
}