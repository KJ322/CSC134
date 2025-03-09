/*
CSC134
M3HW - gold (Q1 chatbot)
Jackson K
03/09/25
*/

#include <iostream>
using namespace std;

int main() 
{
  //declaring variables
  string choice;

  //retreive user input
  cout << "Hello, I'm a C++ program!" << endl;
  cout << "Do you like me? Please type yes or no." << endl;
  cin >> choice;

  //determines next line based on user input
  if (choice == "yes")
  {
    cout << "That's great! I'm sure we'll get along!" << endl;
  }
  else if (choice == "no")
  {
    cout << "Well, maybe you'll learn to like me later" << endl;
  }
  else
  {
    cout << "If you're not sure, that's OK." << endl;
  }

  return 0;
}