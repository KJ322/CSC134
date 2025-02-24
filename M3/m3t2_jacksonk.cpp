/*
CSC134
M3T1 - Choices
Jackson K
02/24/25
*/

// M3T2 starting point

#include <iostream>
// for random
#include <cmath>    
#include <ctime>
using namespace std;

int main() {
    const int SIDES = 20; // yours will differ!
    const int CHECK = 15;
    //int seed = 42;
    int seed = time(0);
    //cout << "seed is: " << seed << endl;
    // seed the random number generator
    srand(seed);
    // rand() is a large number, so we take the remainder which is %
    int roll1, modifier, total;
    // roll a few times
    roll1 = ( (rand() % SIDES)+1 );
    cout << roll1 << endl;

    //roll2 = ( (rand() % SIDES)+1 );
    //cout << roll2 << endl;

    total = roll1 + modifier;
    cout << "You rolled " << roll1 << " + " << modifier << " = " << total << endl;

    if (total >= CHECK)
    {
      cout << "You succeeded!" << endl;
    }
    else
    {
      cout << "You failed" << endl;
    }

}