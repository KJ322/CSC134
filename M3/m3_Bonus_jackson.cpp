#include <iostream>
#include <ctime>
using namespace std;

// Global variables for character stats
int strength, dexterity, constitution, intelligence, wisdom, charisma;
string name, char_class;
int level, hp;

// Function prototypes
void inputStats();
void displayCharacter();
void saveCharacter();
int rollDice();
int rollStat();

int main() {
    srand(time(0));
    inputStats();
    displayCharacter();
    cout << "Type 'a' to accept, or 'r' to reroll your stats." << endl;
    char choice;
    cin >> choice;
    while (choice == 'r')
    {
        inputStats();
        displayCharacter();
        cout << "Type 'a' to accept, or 'r' to reroll your stats." << endl;
        char choice;
    }
    return 0;
}

//function definition
void inputStats() {
    cout << "Rolling your stats...";
    strength = rollStat();
    dexterity = rollStat();
    constitution = rollStat();
    intelligence = rollStat();
    wisdom = rollStat();
    charisma = rollStat();
}

void displayCharacter() {
    cout << "\nCharacter Stats:\n";
    cout << "Strength: " << strength << endl;
    cout << "Dexterity: " << dexterity << endl;
    cout << "Constitution: " << constitution << endl;
    cout << "Intelligence: " << intelligence << endl;
    cout << "Wisdom: " << wisdom << endl;
    cout << "Charisma: " << charisma << endl;
}

void saveCharacter()
{

}

int rollDice()
{
    return rand() % 6 + 1;
}

int rollStat()
{
    //rolls 3d6
    int stat;
    stat = rollDice() + rollDice() + rollDice();
    return stat;
}