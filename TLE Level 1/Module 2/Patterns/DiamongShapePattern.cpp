#include <bits/stdc++.h>
using namespace std;

/*
      0 1 2 3 4 5 6 7 8 9 10 11 12
    +------------------------------+
R0  | # # # # * # # # # #  #  #  # |
R1  | # # # * # * # # # #  #  #  # |
R2  | # # * # * # * # # #  #  #  # |
R3  | # * # * # * # * # #  #  #  # |
R4  | * # * # * # * # * #  #  #  # |
R5  | * # * # * # * # * #  #  #  # |
R6  | # * # * # * # * # #  #  #  # |
R7  | # # * # * # * # # #  #  #  # |
R8  | # # # * # * # # # #  #  #  # |
R9  | # # # # * # # # # #  #  #  # |
    +------------------------------+
*/

int main() {
  int rows;
  cin >> rows;

  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < rows - i - 1; j++)
      cout << " ";

    for (int k = 0; k < 2 * i + 1; k++) {
      if (k % 2 == 0)
        cout << "*";
      else
        cout << " ";
    }
    cout << "\n";
  }

  for (int i = rows - 1; i >= 0; i--) {
    for (int j = 0; j < rows - i - 1; j++)
      cout << " ";

    for (int k = 0; k < 2 * i + 1; k++) {
      if (k % 2 == 0)
        cout << "*";
      else
        cout << " ";
    }
    cout << "\n";
  }
  return 0;
}