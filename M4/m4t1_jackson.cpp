/* CSC134
m4t1 while loops
Katherine Jackson
03/10/25 
*/

#include <iostream>
#include <fstream>
  
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
   //also writing to a file
   const int MIN_NUM = 1;
   const int MAX_NUM = 10;
   int num = MIN_NUM, sq;
   string filename = "squares.txt";

   //open the file
   ofstream outfile(filename);
   if (!outfile.is_open())
   {
        cout << "Error: could not open " << filename << endl;
        return -1; 
   }

   outfile << "Table of squares" << endl;
   outfile << "-----------------" << endl;

   while (num <= MAX_NUM)
   {
        sq = num * num;
        outfile << num << "\t" << sq << endl;
        num++;
   }

   //close the file
   outfile.close();

   cout << endl;
   cout << "finished" << endl;
   cout << endl;

   return 0;
}