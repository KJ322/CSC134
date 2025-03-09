/*
CSC134
M3HW - gold (Q4 Math practice)
Jackson K
03/09/25
*/

#include <iostream>
#include <ctime>
#include <iomanip>
using namespace std;

int main() 
{
  //declaring variables
  int seed = time(0);
  int answer;

  //seeding random number generator
  srand(seed);

  //declaring rest of variables
  int num1 = rand() % 9;
  int num2 = rand() % 9;

 
  cout << "Solve this problem: " << endl;
  cout << num1 << " + " << num2 << endl;
  cin >> answer;

  //determines whether answer is right
  if (answer == num1 + num2)
  {
    cout << "Correct!" << endl;
  }
  else
  {
    cout << "Incorrect" << endl;
  }

  return 0;
}