/* CSC134
m5t2 
Katherine Jackson
03/24/25 
*/

#include <iostream>
  
using namespace std;

int find_square(int number);
void print_line(int number, int square);

int main()
{
    for (int num = 1; num <= 10; num++)
    {
        int square = find_square(num); //should call find_square
        print_line (num, square);
    }

    return 0;
}

int find_square(int number)
{
    int square = number * number;

    return square;
}

void print_line(int number, int square)
{
    cout << "The square of " << number << " is " << square << endl;
}