#include <bits/stdc++.h>
using namespace std;

// # -> space
// 0 ####*
// 1 ###**
// 2 ##***
// 3 #****
// 4 *****

int main() {
  int rows;
  cin >> rows;

  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < rows - i - 1; j++)
      cout << " ";

    for (int k = 0; k <= i; k++)
      cout << "*";
    cout << "\n";
  }
  return 0;
}