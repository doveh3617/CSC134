// CSC 134
// M5T2
// Hayley Dove
// 04/06/2025

#include <iostream>
using namespace std;

void printResult(int first, int second) {
    cout << first << " squared = " << second << endl;

}



int main()
{
    int count = 1;
    int result;

    while (count <= 10) {
        result = count * count;
        printResult(count, result);
        count++;
    }
    
    return 0;
}
