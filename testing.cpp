#include <iostream>
  
using namespace std;

int main()
{
    int userNum;
    string romanNumeral[10] = {"I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX", "X"};

    cout << "Enter a number to translate to roman numerals: ";
    cin >> userNum;
    
    cout << userNum << " as a roman numeral is " << romanNumeral[userNum -1];
}