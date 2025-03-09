// CSC 134
// M3Lab2
// Hayley Dove
// 03/09/2025

#include <iostream>

using namespace std;

int main()
{
    int grade;
    string letterGrade;

    cout << "Please enter your numerical grade: " << endl;
    cin >> grade;

    if (grade >= 90 && grade <= 100) {
        letterGrade = "A";
    }
    else if (grade >= 80 && grade <= 89) {
        letterGrade = "B";
    }
    else if (grade >= 70 && grade <= 79) {
        letterGrade = "C";
    }
    else if (grade >= 60 && grade <= 69) {
        letterGrade = "D";
    }
    else{
        letterGrade = "F";
    }

    cout << "Your letter grade is: " << letterGrade << endl;

    return 0;
}