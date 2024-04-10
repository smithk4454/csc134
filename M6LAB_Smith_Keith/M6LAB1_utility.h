#ifndef M6LAB1_UTILITY_H
#define M6LAB1_UTILITY_H
// Header files let you add more functions to your program
#include <iostream>
using namespace std;
// Prototypes
string shell_name(int shell);


// Definitions
string shell_name(int shell) {
const int MAX_SIZE = 6; // never more than six shells, size of array
const int EMPTY = 0;
const int BLANK = 1;
const int LIVE  = 2;

    string name;
    if (shell == 0) {
        name = "Empty";
    }
    if (shell == 1) {
        name = "Blank";
    }
    if (shell == 2){
        name = "Live";
    }
    return name;
}
#endif // M6LAB1_UTILITY_H