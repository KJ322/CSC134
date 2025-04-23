/* CSC134
m6lab1 buckshot roulette
Katherine Jackson
04/23/25
*/

#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;

// Define constants for directions
enum Direction {
    NORTH = 0,
    EAST = 1,
    SOUTH = 2,
    WEST = 3,
    NUM_DIRECTIONS = 4
};

// Direction strings for output
const string DIRECTION_NAMES[NUM_DIRECTIONS] = {
    "north", "east", "south", "west"
};

// Define constants for rooms
enum Room {
    COCKPIT = 0,
    NORTH_HALLWAY = 1,
    SOUTH_HALLWAY = 2,
    LEFT_BEDROOM = 3,
    RIGHT_BEDROOM = 4,
    KITCHEN = 5,
    STORAGE = 6,
    END_HALL = 7,
    NUM_ROOMS = 8
};

int main() {
    // Room names array
    string roomNames[NUM_ROOMS] = {
        "Cockpit",
        "North Hallway",
        "South Hallway",
        "Left Bedroom",
        "Right Bedroom",
        "Kitchen",
        "Storage",
        "End of Hallway"
    };
    
    // Room descriptions array
    string roomDescriptions[NUM_ROOMS] = {
        "A small room filled with buttons and switches, and two chairs for the pilots. Looking outside, you can see the star field you were studying.",
        "A hallway with four doors and one at the other end. It is just wide enough for two to walk abreast.",
        "You are in the farther half of the hallway.",
        "There are two bunks for crew members. Each have personal affects on the table next to them. There is a painting on the wall above the left bunk.",
        "There are two bunks for crew members. Each have personal affects on the table next to them. There is a bookshelf above the right bunk.",
        "A small kitchen and dining area for the crew.",
        "A small, dark room filled with boxes of extra clothes, rations, and equipment.",
        "A laboratory. There are microscopes, flasks, test tubes, and other equipment bolted to the counter."
    };
    
    // Adjacency list using a 2D array
    // connections[from_room][direction] = to_room or -1 if no connection
    int connections[NUM_ROOMS][NUM_DIRECTIONS];
    
    // Initialize all connections to -1 (no connection)
    for (int i = 0; i < NUM_ROOMS; i++) {
        for (int j = 0; j < NUM_DIRECTIONS; j++) {
            connections[i][j] = -1;
        }
    }
    
    // Define the connections between rooms using the Room enum
    // Entrance Hall connections
    connections[COCKPIT][SOUTH] = NORTH_HALLWAY;    // COCKPIT -> south -> NORTH HALLWAY
    connections[COCKPIT][EAST] = -1;     // no connection
    connections[COCKPIT][SOUTH] = -1;         // No connection south
    connections[COCKPIT][WEST] = -1;      // no connection
    
    // NORTH HALLWAY connections
    connections[NORTH_HALLWAY][NORTH] = COCKPIT;               // north hall -> north -> cockpit
    connections[NORTH_HALLWAY][EAST] = LEFT_BEDROOM;                // north hall -> east -> left bedroom
    connections[NORTH_HALLWAY][SOUTH] = SOUTH_HALLWAY;    // north HALLWAY -> South -> south hallway
    connections[NORTH_HALLWAY][WEST] = RIGHT_BEDROOM;                // north hall -> west -> right bedroom

    // SOUTH HALLWAY connections
    connections[SOUTH_HALLWAY][NORTH] = NORTH_HALLWAY;               // south hall -> north -> north hall
    connections[SOUTH_HALLWAY][EAST] = KITCHEN;                // south hall -> east -> kitchen
    connections[SOUTH_HALLWAY][SOUTH] = END_HALL;    // south HALLWAY -> South -> end hall
    connections[SOUTH_HALLWAY][WEST] = STORAGE;                // south hall -> west -> storage
    
    // Kitchen connections
    connections[KITCHEN][NORTH] = -1;               // No connection north
    connections[KITCHEN][EAST] = -1;                // No connection east
    connections[KITCHEN][SOUTH] = -1;         // NO CONNECTION
    connections[KITCHEN][WEST] = KITCHEN;     // Kitchen -> West -> Entrance Hall
    
    // LEFT_BEDROOM connections
    connections[LEFT_BEDROOM][NORTH] = -1;                // No connection north
    connections[LEFT_BEDROOM][EAST] = NORTH_HALLWAY;      // LEFT_BEDROOM -> East -> Entrance Hall
    connections[LEFT_BEDROOM][SOUTH] = -1;                // No connection south
    connections[LEFT_BEDROOM][WEST] = -1;                 // No connection west
    
    // RIGHT_BEDROOM connections
    connections[RIGHT_BEDROOM][NORTH] = -1;         // RIGHT_BEDROOM -> North -> Kitchen
    connections[RIGHT_BEDROOM][EAST] = NORTH_HALLWAY;               // No connection east
    connections[RIGHT_BEDROOM][SOUTH] = -1;              // No connection south
    connections[RIGHT_BEDROOM][WEST] = -1;               // No connection west

    // RIGHT_BEDROOM connections
    connections[STORAGE][NORTH] = -1;         // RIGHT_BEDROOM -> North -> Kitchen
    connections[STORAGE][EAST] = SOUTH_HALLWAY;               // No connection east
    connections[STORAGE][SOUTH] = -1;              // No connection south
    connections[STORAGE][WEST] = -1;               // No connection west

    // RIGHT_BEDROOM connections
    connections[END_HALL][NORTH] = SOUTH_HALLWAY;         // RIGHT_BEDROOM -> North -> Kitchen
    connections[END_HALL][EAST] = -1;               // No connection east
    connections[END_HALL][SOUTH] = -1;              // No connection south
    connections[END_HALL][WEST] = -1;               // No connection west
    
    // Game state
    int currentRoom = COCKPIT; // Start in the Entrance Hall
    bool gameRunning = true;
    
    // Game loop
    while (gameRunning) {
        // Display current room information
        cout << "\nYou are in the " << roomNames[currentRoom] << endl;
        cout << roomDescriptions[currentRoom] << endl;
        
        // Show available exits
        cout << "Exits: ";
        bool hasExits = false;
        for (int dir = 0; dir < NUM_DIRECTIONS; dir++) {
            if (connections[currentRoom][dir] != -1) {
                cout << DIRECTION_NAMES[dir] << " ";
                hasExits = true;
            }
        }
        if (!hasExits) {
            cout << "none";
        }
        cout << endl;
        
        // Get player input
        string command;
        cout << "\nWhat would you like to do? ";
        cin >> command;
        
        // Process movement commands
        if (command == "north" || command == "n") {
            if (connections[currentRoom][NORTH] != -1) {
                currentRoom = connections[currentRoom][NORTH];
            } else {
                cout << "You can't go that way." << endl;
            }
        } else if (command == "east" || command == "e") {
            if (connections[currentRoom][EAST] != -1) {
                currentRoom = connections[currentRoom][EAST];
            } else {
                cout << "You can't go that way." << endl;
            }
        } else if (command == "south" || command == "s") {
            if (connections[currentRoom][SOUTH] != -1) {
                currentRoom = connections[currentRoom][SOUTH];
            } else {
                cout << "You can't go that way." << endl;
            }
        } else if (command == "west" || command == "w") {
            if (connections[currentRoom][WEST] != -1) {
                currentRoom = connections[currentRoom][WEST];
            } else {
                cout << "You can't go that way." << endl;
            }
        } else if (command == "quit" || command == "q") {
            gameRunning = false;
        } else {
            cout << "I don't understand that command." << endl;
        }
    }
    
    cout << "Thanks for playing!" << endl;
    return 0;
}