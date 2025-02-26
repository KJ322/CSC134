// CSC 134
// M3T3
// Jackson K
// 2/17/2025
// Start with dice rolls
// What dice are you using today?
// use d6

#include <iostream>
// for random
#include <cmath>    
#include <ctime>
using namespace std;

int main() 
{
    const int SIDES = 6; // yours will differ!
    //int seed = 19;
    int seed = time(0);
    // seed the random number generator
    srand(seed);
    // rand() is a large number, so we take the remainder which is %
    int roll1, roll2, total, point;
    // roll a few times
    roll1 = ( (rand() % SIDES)+1 );
    //cout << roll1 << endl;

    roll2 = ((rand() % SIDES) +1 );

    total = roll1 + roll2;

    cout << "You rolled " << roll1 << " + " << roll2 << " = " << total << endl;

    // 7, 11 is a win
    if (7 == total || 11 == total)
    {
        cout << "You win!" << endl;
    }
    //2, 3, 12 is a loss
    else if (2 == total || 3 == total || 12 == total)
    {
        cout << "You lose." << endl;
    }
    //anything else is a point
    else
    {
        cout << "Your point is " << total << endl;
        point = total;
        //cout << "TODO" << endl;
        //loop, keep rolling until the roll point (win) or 7 (lose)
        roll1 = ((rand() % SIDES) + 1);
        roll2 = ((rand() % SIDES) + 1);

        total = roll1 + roll2;

        cout << "You rolled " << roll1 << " + " << roll2 << " = " << total << endl;

        if (total == point)
        {
            cout << "You win!" << endl;
        }
        else if (total == 7)
        {
            cout << "You lose." << endl;
        }
        while (total != 7 && total != point)
        {
            roll1 = ((rand() % SIDES) + 1);
            roll2 = ((rand() % SIDES) + 1);

            total = roll1 + roll2;

            cout << "You rolled " << roll1 << " + " << roll2 << " = " << total << endl;
            
            if (total == 7)
            {
                cout << "You lose." << endl;
            }
        }

            
    }
}