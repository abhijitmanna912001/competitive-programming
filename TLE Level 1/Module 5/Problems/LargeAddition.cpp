#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;

  while (t--) {
    long long x;
    cin >> x;

    bool possible = true;
    bool lastDigit = true;

    while (x >= 10) {
      int digit = x % 10;

      if (lastDigit) {
        if (digit > 8) {
          possible = false;
          break;
        }
        lastDigit = false;
      }
      else if (digit == 0) {
        possible = false;
        break;
      }
      x /= 10;
    }

    if (x != 1)
      possible = false;
    cout << (possible ? "YES" : "NO") << endl;
  }
  return 0;
};