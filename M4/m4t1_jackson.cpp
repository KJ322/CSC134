/* CSC134
m4t1 while loops
Katherine Jackson
03/10/25 
*/

#include <iostream>
  
using namespace std;
  
int main()
{
    //count five times
   int count = 1;
   while (count <= 5)
   {
        cout << "Hello #" << count << endl;
        count += 1;
   }
   cout << "finished" << endl;

   return 0;
}