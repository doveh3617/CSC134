// CSC 134
// M5HW1
// Hayley Dove
// 04/19/2025

#include <iostream>

using namespace std;
void question1(); // Average rainfall
void question2(); // Volume of a block
void question3(); // Roman numeral converter
void question4(); // Geometry calculator
void question5(); // Distance traveled
void circle();
void rectangle();
void triangle();

int main()
{
    int choice;

    do {
        cout << "\nMAIN MENU" << endl;
        cout << "1. Average Rainfall" << endl;
        cout << "2. Volume of a Block" << endl;
        cout << "3. Roman Numeral Converter" << endl;
        cout << "4. Geometry Calculator" << endl;
        cout << "5. Distance Traveled" << endl;
        cout << "6. Exit" << endl;
        cout << "Enter your choice (1-6): " << endl;
        cin >> choice;

        switch (choice) {
            case 1: question1(); break;
            case 2: question2(); break;
            case 3: question3(); break;
            case 4: question4(); break;
            case 5: question5(); break;
            case 6: cout << "Exiting program. Goodbye!" << endl;
            default: cout << "Invalid choice. Please enter a number between 1 and 6." << endl;
        }
    } while (choice != 6);

    return 0;
}

// Question 1
void question1()
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
    
    double average = totalRainfall / 3.0;

    cout << "The average rainfall for " 
    << months[0] << ", " << months[1] << ", and " << months[2] 
    << " is " << average << " inches." << endl;
}

// Question 2
void question2()
{
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
}

// Question 3
void question3()
{
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
}

// Question 4
void question4()
{
    int choice;

    cout << "Geometry Calculator" << endl;
    cout << "1. Calculate the Area of a Circle" << endl;
    cout << "2. Calculate the Area of a Rectangle" << endl;
    cout << "3. Calculate the Area of a Triangle" << endl;
    cout << "4. Quit" << endl;
    cout << "Enter your choice: " << endl;
    cin >> choice;

    if (choice == 1)
    {
        circle();
    }
    else if (choice == 2)
    {
        rectangle();
    }
    else if (choice == 3)
    {
        triangle();
    }
    else if (choice == 4)
    {
        cout << "Goodbye!" << endl;
    }
    else 
    {
        cout << "The valid choices are 1 through 4. Run the program again and select one of those." << endl;
    }
}

// Question 5
void question5()
{
    int speed, hours;

    cout << "What is the speed of the vehicle in mph? ";
    cin >> speed;
    while (speed < 0)
    {
        cout << "Speed cannot be negative. Please enter a valid speed: ";
        cin >> speed;
    }

    cout << "How many hours has it traveled? ";
    cin >> hours;
    while (hours < 1)
    {
        cout << "Time must be at least 1 hour. Please enter a valid time: ";
        cin >> hours;
    }

    
    cout << "\nHour\tDistance Traveled" << endl;
    cout << "-----------------------------" << endl;

    
    for (int hour = 1; hour <= hours; hour++)
    {
        int distance = speed * hour;
        cout << hour << "\t" << distance << endl;
    }

}

void circle()
{
    double radius;
    
    cout << "What is the radius of the circle? " << endl;
    cin >> radius;
    while (radius < 0)
    {
        cout << "The radius cannot be less than zero." << endl;
        cin >> radius;
    }
    double area = 3.14159 * (radius * radius);

    cout << "The area of the circle is " << area << endl;
}

void rectangle()
{
    double length;
    double width;

    cout << "What is the length of the rectangle? " << endl;
    cin >> length;
    while (length <= 0)
    {
        cout << "Only enter positive numbers for length." << endl;
        cin >> length;
    }
    cout << "What is the width of the rectangle? " << endl;
    cin >> width;
    while (width <= 0)
    {
        cout << "Only enter positive numbers for width." << endl;
        cin >> width;
    }

    double area = length * width;

    cout << "The area of the rectangle is " << area << endl;
}

void triangle()
{
    double base;
    double height;

    cout << "What is the length of the base of the triangle? " << endl;
    cin >> base;
    while (base <= 0)
    {
        cout << "Only enter positive numbers for base." << endl;
        cin >> base;
    }
    cout << "What is the height of the triangle? " << endl;
    cin >> height;
    while (height <= 0)
    {
        cout << "Only enter positive numbers for height." << endl;
        cin >> height;
    }

    double area = base * height * .5;

    cout << "The area of the triangle is " << area << endl;
}