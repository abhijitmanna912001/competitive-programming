#include <bits/stdc++.h>
using namespace std;

// 1 * (inner i = 1)
// 2 ** (inner i = 2)
// 3 *** (inner i = 3)
// 4 **** (inner i = 4)
// 5 ***** (inner i = 5)
// n rows

// outer loop -> 5 times -> i = 0 to i = 4
// inner loop -> govern the diff in printing

int main() {
  int n;
  cin >> n;

  for (int i = 0; i < n; i++) {
    for (int j = 0; j <= i; j++)
      cout << "*";
    cout << "\n";
  }
  return 0;
}