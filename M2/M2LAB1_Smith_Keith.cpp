/*
M2Lab1
Crate Sales
Smith Keith
2/5/24
*/
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // Take 1 - just a rectangle
    // Declare variables
    double length, width, height;
    double volume, cost, charge, profit;
    const double COST_PER_CUBIC_FOOT = 0.23;
    const double CHARGE_PER_CUBIC_FOOT = 0.5;
    cout << setprecision(2) << fixed << showpoint;

    // Ask for the user input
    cout << "What is the length of the crate? ";
    cin >> length;
    cout << "What is the width of the crate? ";
    cin >> width;
    cout << "What is the height of the crate? ";
    cin >> height;

    // Do calculations
    volume = length * width * height;
    cost = volume * COST_PER_CUBIC_FOOT;
    charge = volume * CHARGE_PER_CUBIC_FOOT;
    profit = charge - cost;

    // print the answer
    cout << "The volume of the crate is ";
    cout << volume << " cubic feet.\n";
    cout << "Cost to build: $" << cost << endl;
    cout << "Charge to customer: $" << charge << endl;
    cout << "Profit: $" << profit << endl;

    return 0;
}