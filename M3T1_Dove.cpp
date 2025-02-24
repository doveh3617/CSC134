// CSC 134
// M3T1
// Hayley Dove
// 02/23/2025

#include <iostream>
using namespace std;

int main() {
    // declare variables
    int lengthOne, widthOne, lengthTwo, widthTwo;
    int areaOne, areaTwo;

    // ask user for input
    cout << "Please enter the length and width of the first rectangle, \n";
    cout << "separated by a space or new line." << endl;
    cin >> widthOne >> lengthOne;
    cout << "Please enter the length and width of the second rectangle, \n";
    cout << "separated by a space or new line." << endl;
    cin >> widthTwo >> lengthTwo;
    
    // calculate answer
    areaOne = widthOne * lengthOne;
    areaTwo = widthTwo * lengthTwo;

    // display results
    cout << "The area of the first rectangle is: " << areaOne << endl;
    cout << "The area of the second rectangle is: " << areaTwo << endl;

    return 0;
}