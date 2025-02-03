/* CSC134
m1t2 - Receipt
Katherine Jackson
0/03/25 */

#include <iostream>
#include <iomanip>
  
using namespace std;
  
int main()
{
   //variables
   string store_name = "Kit's BBQ";
   string food_name = "rack(s) of ribs";
   double food_price = 9.99;
   double subtotal, total;
   double tax_percent, tax_cost;
   int number_ordered;

   //take the order
   cout << setprecision(2) << fixed;
   cout << "Welcome to " << store_name << "!" << endl;
   cout << "One " << food_name << " is " << food_price << endl;
   cout << "How many racks of ribs do you want to order? ";
   cin >> number_ordered;
   cout << endl;

   //calculations
   
   tax_percent = 0.08;
   subtotal = food_price * number_ordered;
   tax_cost = subtotal * tax_percent;
   total = subtotal + tax_cost;

   //relaying order
   cout << "You ordered " << number_ordered << " " << food_name << " and it is $" << subtotal << endl;

   //prit receipt
   cout << "Subtotal: $" << setw(10) << subtotal << endl; //setw(x) makes every line x characters; lines them up on the left 
   cout << "Tax (8%): $" << setw(10) << tax_cost << endl;
   cout << "Total:    $" << setw(10) << total << endl;
   cout << endl;
   cout << "Have a nice day!" << endl;
   return 0;
}