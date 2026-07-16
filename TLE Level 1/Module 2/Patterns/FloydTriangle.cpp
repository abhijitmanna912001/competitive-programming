#include <bits/stdc++.h>
using namespace std;

// 1
// 2 3
// 4 5 6
// 7 8 9 10

int main() {
  int rows;
  int count = 1;
  cin >> rows;

  for (int i = 0; i < rows; i++) {
    for (int j = 0; j <= i; j++)
      cout << count++ << " ";
    cout << "\n";
  }
  return 0;
}