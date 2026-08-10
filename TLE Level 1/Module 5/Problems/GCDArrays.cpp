#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;

  while (t--) {
    long long l, r, k;
    cin >> l >> r >> k;

    if (l == r) {
      cout << (l > 1 ? "YES\n" : "NO\n");
      continue;
    }

    long long odd = (r + 1) / 2 - l / 2;

    if (l == r)
      cout << (l > 1 ? "YES\n" : "NO\n");
    else
      cout << (odd <= k ? "YES\n" : "NO\n");
  }

  return 0;
}