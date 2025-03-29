// CSC 134
// M4Lab1
// Hayley Dove
// 03/29/2025

#include <iostream>
using namespace std;

int main()
{
    int height;
    int width;

    cout << "How tall should the block be?" << endl;
    cin >> height;
    cout << "How wide should the block be?" << endl;
    cin >> width;

    for (int j=0; j < height; j++) {
        for (int i=0; i < width; i++) {
            cout << "*" << " ";
        }
        cout << endl;
    }

    return 0;
}