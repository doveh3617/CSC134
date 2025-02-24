// CSC 134
// M2HW1 Q1
// Hayley Dove
// 02/23/2025

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // declare variables
    string firstName, lastName;
    double startBal, deposit, withdrawal, endBal;
    int accountNum = 56318739;

    // Set desired output formatting
    cout << setprecision(2) << fixed << showpoint;

    // ask user for input
    cout << "Please enter your name." << endl;
    cin >> firstName >> lastName;
    cout << "What is your starting account balance?" << endl;
    cin >> startBal;
    cout << "How much do you want to deposit?" << endl;
    cin >> deposit;
    cout << "How much do you want to withdraw?" << endl;
    cin >> withdrawal;

    // calculate ending balance
    endBal = startBal + deposit - withdrawal;

    // output banking information
    cout << firstName + " " + lastName << endl;
    cout << accountNum << endl;
    cout << "$" << endBal << endl;

    return 0;
}