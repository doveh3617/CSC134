// CSC 134
// M2HW1 Q3
// Hayley Dove
// 02/23/2025

#include <iostream>
using namespace std;

int main() {
    // declare variables
    int pizzas, slices, visitors, perVisitor, totalSlices, leftover;
    perVisitor = 3;

    // ask user for input
    cout << "How many pizzas did you order?" << endl;
    cin >> pizzas;
    cout << "How many slices are in each pizza?" << endl;
    cin >> slices;
    cout << "How many visitors are you expecting?" << endl;
    cin >> visitors;

    // calculate how many slices will be leftover
    totalSlices = perVisitor * visitors;
    leftover = (pizzas * slices) - totalSlices;

    // output calculation
    cout << "There is/are " << leftover << " leftover slice(s)." << endl;

    return 0;
}