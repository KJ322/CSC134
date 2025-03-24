/* CSC134
m5t1 basic functions
Katherine Jackson
03/24/25 
*/

#include <iostream>
  
using namespace std;

//function declarations (first line only)
void say_hi();
int add (int first, int second);
void print_number(int num);

int main()
{
    say_hi();
    cout << "2 + 2 = ";
    int num = add(2, 2);
    print_number(num);

    return 0;
}

//function defitions (full thing)
void say_hi()
{
    cout << "Hi!" << endl;
}

int add(int first, int second)
{
    int answer = first + second;
    return answer;
}

void print_number(int num)
{
    cout << num << endl;
}