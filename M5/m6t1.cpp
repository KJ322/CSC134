/* CSC134
m6t1 Arrays
Katherine Jackson
04/07/25 
*/

#include <iostream>
  
using namespace std;

int main()
{
    const int NUM_STATS = 6;
    const int STR = 0;
    const int DEX = 1;
    const int CON = 2;
    const int INT = 3;
    const int WIS = 4;
    const int CHA = 5;

    int stats[NUM_STATS];
    int current_stat;
    double total_stats;
    double average_stat;

    cout << "Please eneter your character stats." << endl;
    for (int i = 0; i < NUM_STATS; i++)
    {
        cout << "Stat: ";
        cin >> current_stat;
        stats[i] = current_stat;
    }

    cout << "STR: " << stats[STR] << endl;
    cout << "DEX: " << stats[DEX] << endl;
    cout << "CON: " << stats[CON] << endl;
    cout << "INT: " << stats[INT] << endl;
    cout << "WIS: " << stats[WIS] << endl;
    cout << "CHA: " << stats[CHA] << endl;
    
}