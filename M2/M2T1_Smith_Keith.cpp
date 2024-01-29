/*
CSC 134
M2T1 - Reciept
Keith Smith
1/29/24

*/

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    cout << "M2T1" << endl;
    cout << "Thank you for dining with us" << endl;
    cout << "----------------------------" << endl;
    // set up variables
    string meal = "Value Meal";
    // all in $, except the percent
    double meal_price = 5.99;
    double tax_percent = 0.08;
    double tax_amount = 0;
    double total = 0;

    // do calculations
    tax_amount = meal_price * tax_percent;
    total = meal_price + tax_amount;

    // print the reciept
    // print this once to set the decimals to only two
    cout << fixed << setprecision(2);
    cout << "Value Meal: "  << "\t$" << meal_price << endl;
    cout << "Tax: "   << "\t\t$" << tax_amount << endl;
    cout << "----------------------------" << endl;
    cout << "Total:"  << "\t\t$" << total << endl;

    return 0;
}