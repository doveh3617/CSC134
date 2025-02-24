// CSC 134
// M2HW1 Q2
// Hayley Dove
// 02/23/2025

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // Constants for cost and amount charged
    const double COST_PER_CUBIC_FOOT = 0.3;
    const double CHARGE_PER_CUBIC_FOOT = 0.52;

    // Variables
    double length, // Crate's length
            width, // Crate's width
            height, // Crate's height
            volume, // Crate's volume
            cost, // Cost to build
            charge, // Charge to customer
            profit; // Profit made

    // Set desired output formatting
    cout << setprecision(2) << fixed << showpoint;
    
    // Prompt user for the crate's length, width, and height
    cout << "Enter the dimensions of the crate (in feet):\n";
    cout << "Length: ";
    cin >> length;
    cout << "Width: ";
    cin >> width;
    cout << "Height: ";
    cin >> height;

    // Calculate crate volume, production cost, charge to customer
    // and profit
    volume = length * width * height;
    cost = volume * COST_PER_CUBIC_FOOT;
    charge = volume * CHARGE_PER_CUBIC_FOOT;
    profit = charge - cost;

    // Display calculations
    cout << "The volume of the crate is ";
    cout << volume << " cubic feet.\n";
    cout << "Cost to build: $" << cost << endl;
    cout << "Charge to customer: $" << charge << endl;
    cout << "Profit: $" << profit << endl;

    return 0;
}