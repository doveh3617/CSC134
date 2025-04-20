// CSC 134
// M5HW1
// Hayley Dove
// 04/19/2025

#include <iostream>

using namespace std;

int main()
{
    // Question 1
    string months[3];
    double rainfall;
    double totalRainfall = 0;

    for (int i = 0; i < 3; i++)
    {
    cout << "Enter month: " << endl;
    cin >> months[i];
    cout << "Enter rainfall for " << months[i] << ": " << endl;
    cin >> rainfall;
    totalRainfall += rainfall;
    }
    
    double average = totalRainfall / 3.0;

    cout << "The average rainfall for " 
    << months[0] << ", " << months[1] << ", and " 
    << months[2] << " is " << average << " inches." << endl;

    // Question 2
    double width;
    double length;
    double height;

    cout << "Enter the width of the block: " << endl;
    cin >> width;
    while (width <= 0)
    {
        cout << "Width must be greater than 0. Please enter a valid width: " << endl;
        cin >> width;
    }       
    cout << "Enter the length of the block: " << endl;
    cin >> length;
    while (length <= 0)
    {
        cout << "Length must be greater than 0. Please enter a valid length: " << endl;
        cin >> length;
    }   
    cout << "Enter the height of the block: " << endl;
    cin >> height;
    while (height <= 0)
    {
        cout << "Height must be greater than 0. Please enter a valid height: " << endl;
        cin >> height;
    }   

    double volume = length * width * height;

    cout << "The volume of the block is " << volume << endl;

    // Question 3
    int number;

    cout << "Enter a number (1 - 10): ";
    cin >> number;

    while (number < 1 || number > 10) {
        cout << "Invalid input. Please enter a number between 1 and 10: ";
        cin >> number;
    }

    cout << "The Roman numeral version of " << number << " is ";
    switch (number) {
        case 1: cout << "I"; break;
        case 2: cout << "II"; break;
        case 3: cout << "III"; break;
        case 4: cout << "IV"; break;
        case 5: cout << "V"; break;
        case 6: cout << "VI"; break;
        case 7: cout << "VII"; break;
        case 8: cout << "VIII"; break;
        case 9: cout << "IX"; break;
        case 10: cout << "X"; break;
    }
    cout << "." << endl;

    return 0;
}