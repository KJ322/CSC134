/* CSC134
M1HW1 - movie talk
Katherine Jackson
01/27/25 
info about my favourite movie
*/

#include <iostream>
#include <iomanip>
  
using namespace std;
  
int main()
{
    // declaring variables
    string movie_name = "The Wind Rises";
    int release_year = 2014;
    string box_office_gross = "136.5";

   //print statements
   cout << movie_name << " was released in the US in " << release_year << ". It made $" << box_office_gross << " million in USD." << endl;
   cout << "It is a fictionalized biography of a real Japanese engineer, Jiro Horikoshi, who worked on the Mitsubishi Ka-14 for the Japanese military." << endl;
   cout << "It gets its name from a line from a French poem, \"Le vent se lève!...Il faut tenter de vivre!\", which means \"The wind is rising...we must try to live!\"" << endl;
   cout << "One of my favourite quotes from " << movie_name << " is this one, from Italian inventor Caproni: \"Which would you choose: a world with pyramids or a world without?\"" << endl;
   cout << movie_name << " was supposed to be Hayao Miyazaki's final feature film, before he reversed the decision and directed many more films for Studio Ghibli." << endl;
   

   cout << "Jiro's first meeting with Caproni" << endl;
   cout << "Young Jiro: Mr. Caproni, may I ask you a question? I know I can't be a pilot because of my eyesight. If I'm not a pilot, can I still design airplanes?" << endl;
   cout << "Caproni: Japanese boy, I've been around planes all my life, do you know how many I've flown? None! Not a one!" << endl;
   cout << "Caproni: Many can fly airplanes, but I design them - I CREATE airplanes, and so can you! An aeronautical engineer!" << endl;
   cout << "Young Jirô: Yes!" << endl;
   cout << "Caproni: But remember this, Japanese boy - airplanes are not tools for war, they are not for making money. Airplanes are beautiful dreams. Engineers turn dreams into reality." << endl;
    
   return 0;
}