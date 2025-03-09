// CSC-134
// m3HW1
// Hayley Dove
// 03/09/2025

#include <iostream>
#include <iomanip>
#include<cstdlib>
using namespace std;

void chooseFire();
void chooseSwim();

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
    cout << "" << endl;

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

    }
    else if (decision == 2) {
        tipAmt = 0;
        taxAmt = price * TAX;
        total = price * taxAmt;
    }
    else {
        cout << "That is not a valid choice." << endl;
    }

    cout << setprecision(2) << fixed;
    cout << "Your meal price was: $" << price << endl;
    cout << "Your tax amount was: $" << taxAmt << endl;
    cout << "Your tip amount was: $" << tipAmt << endl;
    cout << "Your total amount was: $" << total << endl;
    cout << "" << endl;

    // Question 3
    int option;
    cout << "Question 3" << endl;
    cout << "You are stranded on a seemingly deserted island, you can either build a fire or go for a swim." << endl;
    cout << "Which option will you choose? Please use 1 for fire or 2 for swim." << endl;
    cin >> option;

    if (option == 1) {
        chooseFire();
    }
    else if (option == 2) {
        chooseSwim();
    }
    else{
        cout << "That isn't a valid option, you lose." << endl;
    }

    cout << "Thank you for playing!" << endl;
    cout << "" << endl; 

    // Question 4
    srand((unsigned) time(NULL));
    int random1 = rand() % 10;
    int random2 = rand() % 10;
    int answer = random1 + random2;
    int userAnswer;

    cout << "Question 4" << endl;
    cout << "What is " << random1 << " plus " << random2 << "?" << endl;
    cin >> userAnswer;

    if (userAnswer == answer){
        cout << "Correct! Great job!" << endl;
    }
    else {
        cout << "Incorrect answer. The correct answer is " << answer << endl;
    }


  return 0;

}

void chooseFire() {
    int pick;
    cout << "You have chosen to build a fire." << endl;
    cout << "Great job! You survived the night." << endl;
    cout << "Now you must decide if you would rather go hunting for food or search for civilization." << endl;
    cout << "Choose 1 for hunting and 2 for searching." << endl;
    cin >> pick;
    
    if (pick == 1){
        cout << "While hunting for food, a pack of wild monkeys attacked you." << endl;
        cout << "You're dead, game over." << endl;
    }
    else if (pick == 2) {
        cout << "While searching for civilization, you came across a local tribe that took you in and taught you how to survive" << endl;
        cout << "Congratulations! You win the game!" << endl;
    }
}

void chooseSwim() {
    cout << "You having chosen to go for a swim." << endl;
    cout << "While swimming, you were attacked by a group of hungry sharks." << endl;
    cout << "You're dead, Game Over." << endl;
}