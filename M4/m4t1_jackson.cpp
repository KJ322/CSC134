/* CSC134
m4t1 while loops
Katherine Jackson
03/10/25 
*/

#include <iostream>
  
using namespace std;
  
int main()
{
    //part 1 - count five times
   int count = 1;
   while (count <= 5)
   {
        cout << "Hello #" << count << endl;
        count += 1;
   }
   cout << endl;
   cout << "finished" << endl;
   cout << endl;

   //part 2 - table of squares
   const int MIN_NUM = 1;
   const int MAX_NUM = 10;
   int num = MIN_NUM, sq;

   cout << "Table of squares" << endl;
   cout << "-----------------" << endl;

   while (num <= MAX_NUM)
   {
        sq = num * num;
        cout << num << "\t" << sq << endl;
        num++;
   }
   cout << endl;
   cout << "finished" << endl;
   cout << endl;

   return 0;
}