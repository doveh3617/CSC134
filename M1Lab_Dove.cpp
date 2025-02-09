// CSC 134
// M1Lab
// Hayley Dove
// 02/09/2025

#include <iostream>

using namespace std;

int main()
{
    string name = "Hayley Dove";
    int num_apples = 100;
    double pricePerApple = 0.25;

    double totalPrice = (double) num_apples * pricePerApple;

    cout << "Welcome to " << name; 
    cout << "'s apple orchard!" << endl;
    cout << "We have " << num_apples;
    cout << " apples in stock." << endl;
    cout << "Apples are currently $";
    cout << pricePerApple << " each." << endl;


    cout << "If you want them all, that will be $";
    cout << totalPrice << endl;

    return 0;
}