#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;

    int ops = 0;

    while (n != 1) {
      if (n % 6 == 0) {
        n /= 6;
        ops++;
      } else if ((n * 2) % 6 == 0) {
        n = (n * 2) / 6;
        ops += 2;
      } else
        break;
    }

    cout << (n == 1 ? ops : -1) << endl;
  }
  return 0;
}