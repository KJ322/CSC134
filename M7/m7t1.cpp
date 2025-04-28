/*CSC134
m7t1 resteraunt starter
Katherine Jackson
04/28/25
*/

#include <iostream>
using namespace std;

// Next time we'll put the class in a separate file
class Restaurant 
{
  private:
    string name;    // the name
    double rating;  // 0 to 5 stars

  public:
	// constructor 
	Restaurant(string n, double r) 
    {
		name = n;
		rating = r;
	}

    //empty constructor
    Restaurant()
    {
        //does nothing
    }

	// getters and setters
    void setName(string n) 
    {
        name = n; 
    }
    void setRating(double r) 
    {
        rating = r;
    }
    string getName() const 
    {
        return name;
    }
    double getRating() const 
    {
        return rating;
    }

    //display the information
    void showInfo()
    {
        cout << "Restaurant Name: " << name << endl;
        cout << "Restaurant Rating: " << rating << endl;
    }
  
};

int main() 
{
    cout << "M7T1 - Restaurant Reviews" << endl;

    //first create a restauraunt
    Restaurant rest1 = Restaurant("Mission BBQ", 4);

    //ask the user to enter one
    Restaurant rest2 = Restaurant();

    //get name and rating
    cout << "Restaurant name: ";
    string name;
    double rating;
    getline(cin, name);
    cout << "Restaurant rating: ";
    cin >> rating;
    rest2.setName(name);
    rest2.setRating(rating);

    //display the data
    cout << "------" << endl;
    rest1.showInfo();
    rest2.showInfo();
    
    return 0;
}