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
   string food_name = "rack of ribs";
   double food_price = 9.99;
   double subtotal, total;
   double tax_percent, tax_cost;

   //take the order
   cout << setprecision(2) << fixed;
   cout << "Welcome to " << store_name << "!" << endl;
   cout << "You ordered one " << food_name << " and it's $" << food_price << endl;
   cout << endl;

   //calculations
   tax_percent = 0.08;
   subtotal = food_price;
   tax_cost = subtotal * tax_percent;
   total = subtotal + tax_cost;

   //prit receipt
   cout << "Subtotal: $" << subtotal << endl;
   cout << "Tax (8%): $" << tax_cost << endl;
   cout << "Total:    $" << total << endl;
   cout << endl;
   cout << "Have a nice day!" << endl;
   return 0;
}