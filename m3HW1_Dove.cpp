// CSC-134
// m3HW1
// Hayley Dove
// 03/09/2025

#include <iostream>
using namespace std;


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

    

  return 0;

}