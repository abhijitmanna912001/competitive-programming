#include <bits/stdc++.h>
using namespace std;

//   01234
// 0 *****
// 1 *   *
// 2 *   *
// 3 *   *
// 4 *****

int main() {
  int rows;
  cin >> rows;

  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < rows; j++) {
      if (i > 0 && i < rows - 1 && j > 0 && j < rows - 1)
        cout << " ";
      else
        cout << "*";
    }
    cout << "\n";
  }
  return 0;
}