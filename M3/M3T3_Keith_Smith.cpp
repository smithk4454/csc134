// CSC 134 
// M3T3
// Keith Smith
// 21/02/24

#include <iostream>
#include <cstdlib> // for rand()
#include <ctime>   // for time()
using namespace std;

int main() {
    // Declare variables
    int roll;
    int die1, die2;
    int seed;

    // Set random seed
    // cout << "Enter lucky number: ";
    // cin >> seed;
    srand(time(0)); // our lucky number is the time


    // Ask
     cout << "Welcome to the craps table" << endl;
    
    die1 = (rand() % 6) +1;
    die2 = (rand() % 6) +1;
    roll = die1 + die2;

    // Calculate
    cout << "Roll " << die1 << " and " << die2 << " totals: " << roll << endl;
    if (roll == 7 || roll == 11) {
        cout << "You Win!" << endl;
    }
    else if (roll == 2 || roll == 3 || roll == 12) {
        cout << "You lose..." << endl;
    }
    else {
        cout << "Your point is: " << roll << endl;
        cout << "TODO: roll the point" << endl;
    }

        return 0;
}