#include <iostream>
using namespace std;

/*
CSC 134
M6LAB1 - Buckshot Roulette
Smith Keith
4/10
Array representing a magazine containing live and dummy rounds
*/

// constant variables
const int MAX_SIZE = 6; // never more than six shells, size of array
const int EMPTY = 0;
const int BLANK = 1;
const int LIVE  = 2;

// global array for the magazine
int magazine[MAX_SIZE] = {LIVE, BLANK, LIVE, BLANK, EMPTY, EMPTY};

int main() {
    cout << "M6LAB1" << endl;
    // range based for loop
    for (int shell : magazine) {
        //cout << shell << ",";
        
    }
    cout << endl << ednl;
    // index based for loop
    for (int i=0; i < MAX_SIZE; i ++) {
        int shell = magazine[i];
        string name = shell_name(shell);
        cout << name << ",";
    }
    return 0;
}