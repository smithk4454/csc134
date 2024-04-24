// M6LAB2
// Arrays, Vectors, and Linked Lists
// CSC 134
// Smith Keith
// 4/24/24

#include <iostream>
#include <vector>

using namespace std;

// 3 examples
void array_example();
void vector_example();
void linked_list();

int main() {
  cout << "M6LAB2" << endl;
  array_example();
  vector_example();
  linked_list();
  return 0;
}

// 3 examples -- full functions
void array_example() {
    cout << "Example 1: Array" << endl;
    const int SIZE = 5; // absolute max
    int max = 3;        // current max
    int nums[SIZE] = {1, 2, 2, 0, 0};
    // add a fourth item
    nums[max] = 3;
    max = max+1;
    // print each item
    for (int i=0; i<max; i++) {
      cout << nums[i] << ",";
    }
    cout << endl;
}