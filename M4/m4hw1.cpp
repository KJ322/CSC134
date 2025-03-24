/* CSC134
m4hw1 times tables
Katherine Jackson
03/24/25 
*/

#include <iostream>
  
using namespace std;

void print_line(int number, int product, int user_number);
int multiply(int number, int user_number);
int get_num(int user_number);

int main()
{
    int user_number = get_num(user_number);

    for (int num = 1; num <= 12; num++)
    {
        int product = multiply(num, user_number);
        print_line(num, product, user_number);
    }

    return 0;
}

int get_num(int user_number)
{
    cout << "Enter a number between 1 and 12: ";
    cin >> user_number;

    if (user_number < 1 || user_number > 12)
    {
        cout << "Number is not between 1 and 12. Please try again." << endl;
        cout << "Enter a number between 1 and 12: ";
        cin >> user_number;
    }

    return user_number;
}

int multiply (int number, int user_number)
{
    int product = user_number * number;

    return product;
}

void print_line(int number, int product, int user_number)
{
    cout << user_number << " times " << number << " is " << product << endl;
}