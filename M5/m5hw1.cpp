/* CSC134
m5hw1
Katherine Jackson
04/02/25
*/

#include <iostream>
#include <iomanip>
  
using namespace std;

void rainfallAverage();
void volumeCalculator();
void romanNumerals();
void geometryCalculator();
void distanceCalculator();
void goAgain();

int main()
{
    int choice;
    const int AVERAGE = 1; 
    const int VOLUME = 2; 
    const int ROMAN_NUMERALS = 3;
    const int GEOMETRY = 4;
    const int DISTANCE = 5;  
    const int QUIT = 6;

    cout << "1. Rainfall Average" << endl;
    cout << "2. Volume Calculator" << endl;
    cout << "3. Roman Numeral Translator" << endl;
    cout << "4. Geometry Calculator" << endl;
    cout << "5. Distance Calculator" << endl;
    cout << "6. Quit" << endl;
    cout << "Enter choice: ";
    cin >> choice;

    switch (choice)
    {
        case AVERAGE: 
            rainfallAverage();
        case VOLUME: 
            volumeCalculator();
        case ROMAN_NUMERALS:
            romanNumerals();
        case GEOMETRY:
            geometryCalculator();
        case DISTANCE:
            distanceCalculator();
        case QUIT:
            cout << "Have a nice day!";
        default:
            cout << "Invalid input. Try again." << endl;
            cin >> choice;
    }

    return 0;
}

void rainfallAverage()
{
    //TODO
}

void volumeCalculator()
{
    //TODO
}

void romanNumerals()
{
    int userNum;

    cout << "Enter a number between 1 and 10: ";
    cin >> userNum;

    switch (userNum)
    {
        case 1: 
            cout << "The roman numeral version of 1 is I" << endl;
        case 2: 
            cout << "The roman numeral version of 2 is II" << endl;
        case 3:
            cout << "The roman numeral version of 3 is III" << endl;
        case 4:
            cout << "The roman numeral version of 4 is IV" << endl;
        case 5:
            cout << "The roman numeral version of 5 is V" << endl;
        case 6:
            cout << "The roman numeral version of 6 is VI" << endl;
        case 7:
            cout << "The roman numeral version of 7 is VII" << endl;
        case 8:
            cout << "The roman numeral version of 8 is VIII" << endl;
        case 9:
            cout << "The roman numeral version of 9 is IX" << endl;
        case 10:
            cout << "The roman numeral version of 10 is X" << endl;
        default:
            cout << "Invalid input" << endl;
            romanNumerals();
    }
}

void geometryCalculator()
{
    //TODO
}

void distanceCalculator()
{
    int speed, time, distance;

    cout << "What is the speed in mph? ";
    cin >> speed;
    cout << "How many hours has it been? ";
    cin >> time;

    cout << "-------------------------------------" << endl;
    for (int i = 1; i <= time; i++)
    {
        distance = speed * i;

        
        cout << i << setw(10) << distance << endl;
    }

}