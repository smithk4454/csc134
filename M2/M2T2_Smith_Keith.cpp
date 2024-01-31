/*
CSC 134
M2T2 - Apple Sales Part 2
Keith Smith
01/31/24
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main ()
{
    cout << "M2T2 - Apple Sales Part 2" << endl;
    // Simulate selling apples
    string name;
    int apples;
    double price_each;
  
    cout << "Please enter your name: ";
    cin >> name;
    cout << "How many apples do you want? ";
    cin >> apples;
    cout << "How much are the apples? ";
    cin >> price_each;

    // NOTE: math operations are + - * /
    double total_price = apples * price_each;
    // Print the output
    cout << fixed << setprecision(2);
    cout << "Welcome to our orchard,  " << name << endl;
    cout << "-------------------------------------------" << endl;
    cout << "Delicious Apples" << "\t" << apples << "\t" << "amt" << endl;
    cout << "Cost" << "\t\t\t$" << price_each << "\t" << "per" << endl;
    cout << "-------------------------------------------" << endl;
    cout << "Total" << "\t\t\t$" << total_price << endl;

    return 0;
}
