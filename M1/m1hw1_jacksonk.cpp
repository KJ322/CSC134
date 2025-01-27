/* CSC134
M1HW1 - movie talk
Katherine Jackson
01/27/25 
info about my favourite movie
*/

#include <iostream>
#include <iomanip>
  
using namespace std;
  
int main()
{
    // declaring variables
    string movie_name = "The Wind Rises";
    int release_year = 2014;
    string box_office_gross = "136.5 million";

   cout << movie_name << " was released in the US in " << release_year << ". It made $" << box_office_gross << "." << endl;
   cout << movie_name << " is a fictionalized biography of a real Japanese inventor." << endl;
   cout << "" << endl;
   
   return 0;
}