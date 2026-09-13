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

    vector<int> a(n);
    for (int &x : a)
      cin >> x;

    bool possible = false;

    for (int i = 1; i < n; i++) {
      if (a[i - 1] <= a[i]) {
        possible = true;
        break;
      }
    }

    cout << (possible ? "YES" : "NO") << '\n';
  }

  return 0;
}