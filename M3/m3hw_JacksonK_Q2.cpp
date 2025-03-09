/*
CSC134
M3HW - gold (Q2 receipt calculator)
Jackson K
03/09/25
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() 
{
  //declaring variables
  double price, tip_total, total, tax_cost;
  int to_tip;
  const int DINEIN = 1;
  const int TAKEAWAY = 2;
  const double TAX = 0.08;


  //retreiving user input
  cout << "Please enter the price of the meal: " << endl;
  cin >> price;

  cout << "Please enter 1 if the order is dine in, or 2 if it is to go: " << endl;
  cin >> to_tip;

  //calculations
  if (to_tip == DINEIN)
  {
    tip_total = price * .15;
  }
  else if (to_tip == TAKEAWAY)
  {
    tip_total = 0;
  }

  tax_cost = price * TAX;
  total = price + tip_total + tax_cost;

  //print receipt
  cout << setprecision(2) << fixed;
  cout << "-------------------------------------" << endl;
  cout << "Subtotal: $" << setw(10) << price << endl; //setw(x) makes every line x characters; lines them up on the left 
  cout << "Tax (8%): $" << setw(10) << tax_cost << endl;
  cout << "Tip     : $" << setw(10) << tip_total << endl;
  cout << "-------------------------------------" << endl;
  cout << "Total:    $" << setw(10) << total << endl;
  cout << endl;
  cout << "Have a nice day!" << endl;
  

  return 0;
}