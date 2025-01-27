/* CSC134
M1Lab1 - Apple sales
Katherine Jackson
01/27/25 
We're selling apples
*/

#include <iostream>
#include <iomanip>
  
using namespace std;
  
int main()
{
    // declaring variables
    string name = "Jackson";
    int num_apples = 100;
    double price_each = 0.25;

   cout << "Welcome to the " << name << " Apple Farm." << endl;
   cout << "We have " << num_apples << " in stock." << endl;
   cout << "The price per apple is $" << price_each << endl;
   
   // calculations
   double total_cost = num_apples * price_each;

   //print answer
   cout <<fixed << setprecision(2); //makes cout print 25.00 instead of 25
   cout << "The total for all " << num_apples << " is $" << total_cost << endl;
   
   return 0;
}