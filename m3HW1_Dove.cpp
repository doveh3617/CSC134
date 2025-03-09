// CSC-134
// m3HW1
// Hayley Dove
// 03/09/2025

#include <iostream>
using namespace std;

void chooseFire;
void chooseSwim;

int main() {

    string choice;

    // Question 1
    cout << "Question 1" << endl;
    cout << "Hello, I am a C++ program!" << endl;
    cout << "Do you think that I am helpful? Please type yes or no" << endl;
    cin >> choice;

    if (choice == "yes") {
        cout << "Glad to be useful to you!" << endl;
    }
    else if (choice == "no") {
        cout << "Maybe one day you will understand my capabilities." << endl;
    }
    else {
        cout << "This wasn't a choice given, I understand if you feel indifferent about me." << endl;
    }

    // Question 2
    int decision;
    double price;
    double tipAmt;
    double taxAmt;
    double totalWithTax;
    double total;
    const double TIP = .15;
    const double TAX = .07;

    cout << "Question 2" << endl;
    cout << "Welcome to the steakhouse!" << endl;
    cout << "Will your order be dine in or togo? Choose 1 for dine-in and 2 for togo." << endl;
    cin >> decision;

    cout << "Please enter the price of your meal." << endl;
    cin >> price;
    
    if (decision == 1) {
        taxAmt = price * TAX;
        totalWithTax = price + taxAmt;
        tipAmt = price * TIP;
        total = totalWithTax + tipAmt;

        cout << "Your meal price was: $" << price << endl;
        cout << "Your tax amount was: $" << taxAmt << endl;
        cout << "Your tip amount was: $" << tipAmt << endl;
        cout << "Your total amount was: $" << total << endl;

    }
    else if (decision == 2) {
        tipAmt = 0;
        taxAmt = price * TAX;
        total = price * taxAmt;
        cout << "Your meal price was: $" << price << endl;
        cout << "Your tax amount was: $" << taxAmt << endl;
        cout << "Your tip amount was: $" << tipAmt << endl;
        cout << "Your total amount was: $" << total << endl;
    }
    else {
        cout << "That is not a valid choice." << endl;
    }

    // Question 3
    int option;
    cout << "Question 3" << endl;
    cout << "You are stranded on a deserted island, you can either build a fire or go for a swim." << endl;
    cout << "Which option will you choose? Please use 1 for fire or 2 for swim." << endl;
    cin >> option;

    


  return 0;

}