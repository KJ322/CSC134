/* CSC134
m6lab1 buckshot roulette
Katherine Jackson
04/23/25
*/

#include <iostream>
#include <vector>
  
using namespace std;

int main()
{
    const int RED = 1;
    const int BLACK = 0;
    const int Empty = -1;

    string shell_names[] = {"Black", "Red", "Empty"};

    //using a basic array
    cout << "Version 1" << endl;

    int magazine[] = {RED, BLACK, BLACK, RED, RED, BLACK};

    for (int shell : magazine)
    {
        string name = shell_names[shell];
        cout << "Next shell: " << name << endl;
    }

    //example 2: using stl vector
    cout << endl << "Version 2" << endl;

    vector <int> mag;

    //loading the mag
    mag.push_back(RED);
    mag.push_back(BLACK);
    mag.push_back(BLACK);

    for (int shell : mag)
    {
        string name = shell_names[shell];
        cout << "Next shell: " << name << endl;
    }
}