#include <bits/stdc++.h>
using namespace std;

// 0 ***** 0 space
// 1 ###*# 3 space > 1 * > 1 space
// 2 ##*## 2 space > 1 * > 2 space
// 3 #*### 1 space > 1 * > 3 space
// 4 ***** 0 space

int main() {
  int n;
  cin >> n;

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (i == 0 || i == n - 1 || j == n - 1 - i)
        cout << "*";
      else
        cout << " ";
    }
    cout << "\n";
  }
  return 0;
}