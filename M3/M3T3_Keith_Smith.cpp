// CSC 134 
// M3T3
// Keith Smith
// 21/02/24

#include <iostream>
using namespace std;

int main() {
    // Declare variables
    int roll;

    // Ask
    cout << "Welcome to the craps table" << endl;
    cout << "What did you roll? ";
    cin >> roll;

    // Calculate
    cout << "Your roll was : " << roll << endl;
    if (roll == 7) {
        cout << "You Win!" << endl;
    }
    else if (roll == 2) {
        cout << "You lose..." << endl;
    }
    else {
        cout << "Your point is: " << roll << endl;
        cout << "TODO: roll the point" << endl;
    }
    // Print

        return 0;
}