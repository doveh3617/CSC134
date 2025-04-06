// CSC 134
// M5T2
// Hayley Dove
// 04/06/2025

#include <iostream>
using namespace std;

void printAnswer(int first, int second) {
    cout << first << " squared = " << second << endl;

}

int square(int number) {
    int result;
    result = number * number;
    return result;
}

int main()
{
    int count = 1;
    int result;

    while (count <= 10) {
        result = square(count);
        printAnswer(count, result);
        count++;
    }
    
    return 0;
}
