#include <bits/stdc++.h>
using namespace std;

// 0 ####*      0->1
// 1 ###***     1->3
// 2 ##*****    2->5
// 3 #*******   3->7
// 4 *********  4->9
// tn = a + (n-1)d
// tn = 1  + (n-1) * 2 => 2*n - 1 -> 1 + 2*n for n = 0, ... -> 2*n + 1
// n == i

int main() {
  int rows;
  cin >> rows;

  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < rows - i - 1; j++)
      cout << " ";

    for (int k = 0; k < 2 * i + 1; k++)
      cout << "*";
    cout << "\n";
  }
  return 0;
}