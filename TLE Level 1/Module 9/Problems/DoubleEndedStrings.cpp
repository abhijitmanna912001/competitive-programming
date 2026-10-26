#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;

  while (t--) {
    string a, b;
    cin >> a >> b;

    int n = a.size();
    int m = b.size();

    int lcs = 0;
    for (int len = 1; len <= min(n, m); len++) {
      for (int i = 0; i + len <= n; i++) {
        for (int j = 0; j + len <= m; j++) {
          bool match = true;

          for (int k = 0; k < len; k++) {
            if (a[i + k] != b[j + k]) {
              match = false;
              break;
            }
          }

          if (match)
            lcs = max(lcs, len);
        }
      }
    }

    cout << n + m - 2 * lcs << "\n";
  }

  return 0;
}