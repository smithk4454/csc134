// CSC 134 
// M3T1 
// Keith Smith
// 02/14/24

#include <iostream>
using namespace std;

int main() {
    // Declare variables
    double width1, height1, width2, height2;
    double area1, area2;
    
    // Ask for length and width of first rectangle
    cout << "What is the width of the first rectangle? ";
    cin >> width1;
    cout << "What is the height of the first rectangle? ";
    cin >> height1;
    cout << "What is the width of the second rectangle? ";
    cin >> width2;
    cout << "What is the height of the second rectangle? ";
    cin >> height2;

    // Calculate the areas
    area1 = width1 * height1;
    area2 = width2 * height2;

    // Print the areas
    cout << "The area of the first rectangle is " << area1 << endl;
    cout << "The area of the second rectangle is " << area2 << endl;
    
        return 0;
}