#include <bits/stdc++.h>
using namespace std;

// 0 *****
// 1 ****
// 2 ***
// 3 **
// 4 *
// (rows - i)

int main() {
  int rows;
  cin >> rows;

  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < rows - i; j++)
      cout << "*";
    cout << "\n";
  }
  return 0;
}