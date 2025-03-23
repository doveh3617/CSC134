// CSC 134
// M4T1
// Hayley Dove
// 03/23/2025

#include <iostream>
using namespace std;

int main()
{
    //Program 5-3
    int number = 5;

    int i = 0;
    while (i < number) {
        cout << "Hello" << endl;

        i++;
    }
    cout << "That's all!" << endl;

    //Program 5-6
    const int MIN_NUMBER =1;
    const int MAX_NUMBER = 10;

    int num = MIN_NUMBER;

    cout << "Number     Number Squared" << endl;
    cout << "-------------------------" << endl;

    while (num <= MAX_NUMBER) {
        cout << num << "\t\t" << num * num << endl;
        num++;
    }

    return 0;
}