/* CSC134
m5hw1
Katherine Jackson
04/02/25
*/

#include <iostream>
#include <iomanip>
  
using namespace std;

void menu();
void rainfallAverage();
void volumeCalculator();
void romanNumerals();
void geometryCalculator();
void distanceCalculator();

//functions for geometry calculator
void circle();
void rectangle();
void triangle();

int main()
{
    menu();

    return 0;
}

void menu()
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

    if (choice == AVERAGE)
    {
        rainfallAverage();
    }
    else if (choice == VOLUME)
    {
        volumeCalculator();
    }
    else if (choice == ROMAN_NUMERALS)
    {
        romanNumerals();
    }
    else if (choice == GEOMETRY)
    {
        geometryCalculator();
    }
    else if (choice == DISTANCE)
    {
        distanceCalculator();
    }
    else if (choice == QUIT)
    {
        cout << "Have a nice day!" << endl;
    }
    else
    {
        cout << "Invalid input. Please try again." << endl;
        menu();
    }
}

void rainfallAverage()
{
    string choice;
    string month1, month2, month3;
    double rainfall1, rainfall2, rainfall3;

    //collect info for month 1
    cout << "Enter month 1: ";
    cin >> month1;
    cout << "Enter rainfall for " << month1 << ": ";
    cin >> rainfall1;

    //collect info for month 2
    cout << "Enter month 2: ";
    cin >> month2;
    cout << "Enter rainfall for " << month2 << ": ";
    cin >> rainfall2;

    //collect info for month 3
    cout << "Enter month 3: ";
    cin >> month3;
    cout << "Enter rainfall for " << month3 << ": ";
    cin >> rainfall3;

    double average = (rainfall1 + rainfall2 + rainfall3) / 3;

    cout <<fixed << setprecision(2); 
    cout << "The average rainfall for " << month1 << ", " << month2 << ", and " << month3 << " is " << average << endl;

    cout << "Would you like to calculate another average? y/n: ";
    cin >> choice;

    if (choice == "y")
    {
        rainfallAverage();
    }
    else if (choice == "n")
    {
        cout << "Thank you for using the rainfall average calculator!" << endl;
        menu();
    }
}

void volumeCalculator()
{
    string choice;
    double length, width, height;

    cout << "Enter the length of the box: ";
    cin >> length;
    if (length <= 0)
    {
        cout << "Value must be greater than 0." << endl;
        cout << "Enter the length of the box: ";
        cin >> length;
    }

    cout << "Enter the width of the box: ";
    cin >> width;
    if (width <= 0)
    {
        cout << "Value must be greater than 0." << endl;
        cout << "Enter the width of the box: ";
        cin >> width;
    }

    cout << "Enter the height of the box: ";
    cin >> height;
    if (height <= 0)
    {
        cout << "Value must be greater than 0." << endl;
        cout << "Enter the height of the box: ";
        cin >> height;
    }

    double volume = length * width * height;

    cout << "The volume of the box is " << volume << endl;

    cout << "Would you like to calculate the volume again? y/n: ";
    cin >> choice;

    if (choice == "y")
    {
        volumeCalculator();
    }
    else if (choice == "n")
    {
        cout << "Thank you for using the volume calculator!" << endl;
        menu();
    }
}

void romanNumerals()
{
    string choice;
    int userNum;
    string romanNumeral[10] = {"I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX", "X"};

    cout << "Enter a number to translate to roman numerals: ";
    cin >> userNum;
    
    cout << userNum << " as a roman numeral is " << romanNumeral[userNum - 1] << endl;

    cout << "Would you like to translate another number? y/n: ";
    cin >> choice;

    if (choice == "y")
    {
        romanNumerals();
    }
    else if (choice == "n")
    {
        cout << "Thank you for using the roman numeral translator!" << endl;
        menu();
    }
}

void geometryCalculator()
{
    const int CIRCLE = 1;
    const int RECTANGLE = 2;
    const int TRIANGLE = 3;
    const int QUIT = 4;
    int choice;
    string goAgain;

    cout << "GEOMETRY CALCULATOR" << endl;
    cout << "1. Area of a circle" << endl;
    cout << "2. Area of a rectangle" << endl;
    cout << "3. Area of a triangle" << endl;
    cout << "4. Quit" << endl;
    cout << "Enter your choice (1-4): ";
    cin >> choice;

    if (choice == CIRCLE)
    {
        circle();
    }
    else if (choice == RECTANGLE)
    {
        rectangle();
    }
    else if (choice == TRIANGLE)
    {
        triangle();
    }
    else if (choice == QUIT)
    {
        cout << "Have a nice day!" << endl;
        menu();
    }
    else
    {
        cout << "Invalid input. Try again." << endl;
        geometryCalculator();
    }

    cout << "Would you like to calculate another area? y/n: ";
    cin >> goAgain;

    if (goAgain == "y")
    {
        geometryCalculator();
    }
    else if (goAgain == "n")
    {
        cout << "Thank you for using the geometry calculator!" << endl;
        menu();
    }
}

void distanceCalculator()
{
    string choice;
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

    cout << "Would you like to calculate another distance traveled? y/n: ";
    cin >> choice;

    if (choice == "y")
    {
        distanceCalculator();
    }
    else if (choice == "n")
    {
        cout << "Thank you for using the distance calculator!" << endl;
        menu();
    }
}

//functions for geometry calculator
void circle()
{
    double radius;
    double pi = 3.14159;

    cout << "Enter the radius of the circle: ";
    cin >> radius;

    double area = pi * (radius * radius);

    cout << "The area of the circle is " << area << endl;
}

void rectangle()
{
    double length, width;

    cout << "Enter the length of the rectangle: " << endl;
    cin >> length;

    cout << "Enter the width of the rectangle: " << endl;
    cin >> width;

    double area = length * width;

    cout << "The area of the rectangle is " << area << endl;
}

void triangle()
{
    double base, height;

    cout << "Enter the base of the triangle: " << endl;
    cin >> base;

    cout << "Enter the height of the triangle: " << endl;
    cin >> height;

    double area = base * height * 0.5;

    cout << "The area of the triangle is " << area << endl;
}