/*
M2Lab1
Crate Sales
Smith Keith
2/5/24
*/
#include <iostream>
using namespace std;

int main() {
    // Take 1 - just a rectangle
    // Declare variables
    double length, width;
    double area;
    // Ask for the user input
    cout << "What is the length of the crate? ";
    cin >> length;
    cout << "What is the width of the crate? ";
    cin >> width;
    // Do calculations
    area = length * width;

    // print the answer
    cout << "The area is: " <<  area << endl;

    return 0;
}