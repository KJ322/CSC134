/*
CSC134
M3LAB1 - Choices
Jackson K
03/09/25
*/

#include <iostream>
using namespace std;

int main() 
{
  // declare the variable we need
  int choice; 

  //constants
  const int REVENGE = 1;
  const int IGNORE = 2;

  // ask the question
  cout << "The ghost of your recently dead father has told you your uncle killed him and has asked you to take revenge." << endl;
  cout << "What do you do?" << endl;
  cout << "1. Revenge" << endl;
  cout << "2. Ignore"   << endl;
  cout << "Type 1 or 2: "; 
  cin >> choice;

  // using if, make a decision based on the user's choice

  if (REVENGE == choice) 
  {
  	cout << "You resolve to get revenge for your father's murder." << endl;
    cout << "You go mad. You succeed, but at what cost? Everyone, including you, is dead." << endl;
  }
  else if (IGNORE == choice) 
  {
  	cout << "You ignore the call to action, attributing it to demons." << endl;
    cout << "Everyone lives, but there is something rotten in the state of Denmark." << endl;
  }
  else 
  {
  	cout << "I'm sorry, that is not a valid choice." << endl;
  }
  cout << "Thanks for playing!" << endl;
  return 0;
}