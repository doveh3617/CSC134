// CSC 134
// M7T2
// Hayley Dove
// 05/04/2025
#include <iostream>
using namespace std;

class Rectangle
{
    private:
    double width;
    double length;
    public:
    void setWidth(double);
    void setLength(double);
    double getWidth() const;
    double getLength() const;
    double getArea() const;
};

void Rectangle::setWidth(double w)
{
    width = w;
}

void Rectangle::setLength(double len)
{
    length = len;
}

double Rectangle::getWidth() const
{
    return width;
}

double Rectangle::getLength() const
{
    return length;
}

double Rectangle::getArea() const
{
    return width * length;
}

int main()
{
    Rectangle box;
    double rectWidth;
    double rectLength;

    cout << "This program will calculate the area of a rectangle." << endl;
    cout << "What is the width? " << endl;
    while (!(cin >> rectWidth) || rectWidth <= 0)
    {
        cout << "Invalid input. Please enter a positive number for width: " << endl;
        cin.clear();
        cin.ignore(1000, '\n');
    }
    cout << "What is the length?" << endl;
    while (!(cin >> rectLength) || rectLength <= 0)
    {
        cout << "Invalid input. Please enter a positive number for length: " << endl;
        cin.clear();
        cin.ignore(1000, '\n');
    }

    box.setWidth(rectWidth);
    box.setLength(rectLength);

    cout << "Here is the rectangle's data:" << endl;
    cout << "Width: " << box.getWidth() << endl;
    cout << "Length: " << box.getLength() << endl;
    cout << "Area: " << box.getArea() << endl;
    
    return 0;
}