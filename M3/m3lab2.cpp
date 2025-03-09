/*
CSC134
M3LAB2 - Letter grade
Jackson K
03/09/25
*/

#include <iostream>
using namespace std;

int main() 
{
  //declaring variables
  int grade;
  char letter_grade;

  //getter numerical grade from user
  cout << "Enter numerical grade: ";
  cin >> grade;

  //determines letter grade based on user input
  if (grade > 100 || grade < 0)
  {
    cout << "Invalid grade. Try again." << endl;
  }
  else if (grade >= 90 && grade <= 100)
  {
    letter_grade = 'A';
  }
  else if (grade >= 80)
  {
    letter_grade = 'B';
  }
  else if (grade >= 70)
  {
    letter_grade = 'C';
  }
  else if (grade >= 60)
  {
    letter_grade = 'D';
  }
  else if (grade < 60)
  {
    letter_grade = 'F';
  }
  cout << "Your numerical grade is " << grade << endl;
  cout << "Your letter grade is " << letter_grade << endl;

  return 0;
}