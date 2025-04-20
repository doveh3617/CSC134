// CSC 134
// M5HW1
// Hayley Dove
// 04/19/2025

#include <iostream>

using namespace std;
// Question 1
int main()
{
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
    double average = totalRainfall / 3;

    cout << "The average rainfall for " 
    << months[0] << ", " << months[1] << ", and " 
    << months[2] << " is " << average << " inches." << endl;

    return 0;
}

