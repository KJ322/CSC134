/* CSC134
m4lab1 grid with loops
Katherine Jackson
03/17/25 
*/

#include <iostream>
  
using namespace std;

int main()
{
    string pattern = "🐉🦕";
    //cout << pattern << endl;
    int width, height;

    cout << "What is the width of the square? ";
    cin >> width;
    if (width <= 0)
    {
        cout << "The width needs to be greater than 0." << endl;
        cout << "What is the width of the square? ";
        cin >> width;
    };

    cout << "What is the height of the square? ";
    cin >> height;
    if (height <= 0)
    {
        cout << "The height needs to be greater than 0." << endl;
        cout << "What is the height of the square? ";
        cin >> height;
    };

    /*while loop version
    int count = 0;

    while (count < WIDTH)
    {
        cout << pattern;
        count++;
    }
    cout << endl;
    */

    /*print a row
    cout << "Row" << endl;
    for (int i = 0; i < WIDTH; i++)
    {
        cout << pattern;
    }
    cout << endl;*/

    /*print a column
    cout << "Column" << endl;
    for (int i = 0; i < HEIGHT; i++)
    {
        cout << pattern << endl;
    }*/

    //print a square
    cout << "Square of " << width << " by " << height << endl;
    for (int v = 0; v < height; v++)
    {
        
        //print one row
        for (int h = 0; h < width; h++)
        {
            cout << pattern;
        }
        cout << endl; // go to next row

    }
}
 