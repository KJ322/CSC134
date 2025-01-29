/* CSC134
M1Lab1 - More apple sales
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
    string farm_name = "Jackson";
    int num_apples = 100;
    double price_each = 0.25;
    //new variables for this version
    string customer_name;
    int apples_to_buy;

   //welcome message
   cout << "Hello, what's your name? ";
   cin >> customer_name;
   cout << "Nice to meet you, " << customer_name << "!" << endl;

   cout << "Welcome to the " << farm_name << " Apple Farm." << endl;
   cout << endl;
   cout << "We have " << num_apples << " apples in stock." << endl;
   cout << "The price per apple is $" << price_each << endl;
   cout << endl;

   // calculations
   double total_cost = num_apples * price_each;

   //print answer
   cout <<fixed << setprecision(2); //makes cout print 25.00 instead of 25
   cout << "The total for all " << num_apples << " is $" << total_cost << endl;
   cout << endl;

   //transaction
   cout << "How many apples do you want to buy? ";
   cin >> apples_to_buy;
   double customer_cost = apples_to_buy * price_each;
   cout << "For " << apples_to_buy << " apples your total cost is $" << customer_cost << endl;
   
   return 0;
}