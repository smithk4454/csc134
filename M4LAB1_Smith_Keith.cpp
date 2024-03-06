// CSC134
// M4LAB1
// Keith Smith
// 03/06/24

#include <iostream>
using namespace std;

int main()
{
  cout << "M4LAB1" << endl;
  // TODO: ask user for width and height
  int width = 6;
  int height = 5;

  // first a row
  for (int i=0; i < width; i++) {
    cout << "# ";
  }
  cout << endl << endl;
  // next column
  for (int i=0; i < height; i++) {
    cout << "#" << endl;
  }
  cout << endl << endl;
  // put it together
  for (int i=0; i < height; i++) {
    for (int j=0; j < width; j++) {
        cout << "# ";
    }
    cout << endl;
  }
    return 0;
}
