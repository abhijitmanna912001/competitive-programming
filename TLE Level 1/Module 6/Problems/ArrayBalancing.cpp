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

    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++)
      cin >> a[i];
    for (int i = 0; i < n; i++)
      cin >> b[i];

    long long ans = 0;
    for (int i = 0; i < n; i++) {
      if (a[i] > b[i])
        swap(a[i], b[i]);
    }

    for (int i = 0; i < n - 1; i++) {
      ans += abs(a[i] - a[i + 1]);
      ans += abs(b[i] - b[i + 1]);
    }

    cout << ans << '\n';
  }

  return 0;
}