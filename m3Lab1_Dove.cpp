// CSC-134
// m3Lab1
// Hayley Dove
// 03/09/2025

#include <iostream>
using namespace std;

void chooseRun();
void chooseFight();

int main() {

  int choice;

  cout << "Do you want to run or fight?" << endl;
  cout << "Type 1 or 2: ";
  cin >> choice;

  if (1 ==  choice) {
    chooseRun();
  }
  else if (2 == choice) {
    chooseFight();
  }
  else {
    cout << "Sorry, that is not a valid choice. You lose." << endl;
  }

  cout << "Thanks for playing!" << endl;

  return 0;

}

void chooseRun() {
    cout << "You chose to run." << endl;
    cout << "You got away from the criminals!" << endl;
}

void chooseFight() {
    cout << "You chose to fight." << endl;
    cout << "You defeated the criminals and saved the city from destruction!" << endl;
}