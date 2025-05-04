// CSC 134
// M7T1 
// Hayley Dove
// 05/04/2025

#include <iostream>
using namespace std;




class Restaurant {
  private:
    string name;  
    double rating;

  public:
	Restaurant(string n, double r) {
		name = n;
		rating = r;
	}
	
    void setName(string n) {
        name = n; 
    }
    void setRating(double r) {
        rating = r;
    }
    string getName() const {
        return name;
    }
    double getRating() const {
        return rating;
    }
    void printInfo() {
        cout << "Name: " << name << " ";
        cout << "(" << rating << "/5 stars)" << endl;
    }
  
};

int main() {
    cout << "M7T1 - Restaurant Reviews" << endl;

    Restaurant lunch_place = Restaurant("Texas Roadhouse", 4.8);

    Restaurant breakfast_place = Restaurant("IHOP", 4.2);
    
    Restaurant fast_food = Restaurant("Chickfila", 3.8);

    cout << "Review info" << endl;
    cout << "Breakfast: " << endl;
    breakfast_place.printInfo();
    cout << "Lunch: " << endl;
    lunch_place.printInfo();
    cout << "Fast food: " << endl;
    fast_food.printInfo();

    return 0;

}