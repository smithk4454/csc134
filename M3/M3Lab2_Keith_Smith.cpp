// CSC 134 
// M3Lab2
// Keith Smith
// 26/2/24

#include <iostream>
using namespace std;

int main() {
    // Declare variables
    int grade;
    // int letter;

    // Ask for grade number
    cout << "Please enter your numerical grade: ";
    cin >> grade;

    // Calculate the grades
    if (grade<0||grade>100) {
        cout << "This is not a real grade";
    }
    else if (grade>=0&&grade<=59) {
        cout << "Your letter grade is F";
    }
    else if (grade>=60&&grade<=69) {
        cout << "Your letter grade is D";
    }
    else if (grade>=70&&grade<=79) {
        cout << "Your letter grade is C";
    }
    else if (grade>=80&&grade<=89) {
        cout << "Your letter grade is B";
    }
    else if (grade>=90&&grade<=100) {
        cout << "Your letter grade is A!";
    }


        return 0;
}