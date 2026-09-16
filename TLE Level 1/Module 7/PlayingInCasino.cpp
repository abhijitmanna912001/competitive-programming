#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;

  while (t--) {
    int n, m;
    cin >> n >> m;

    vector<vector<int>> a(n, vector<int>(m));
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++)
        cin >> a[i][j];
    }

    long long ans = 0;
    for (int j = 0; j < m; j++) {
      vector<int> col;

      for (int i = 0; i < n; i++)
        col.push_back(a[i][j]);

      sort(col.begin(), col.end());

      for (int i = 0; i < n; i++) {
        int added = i;
        int subtracted = n - i - 1;

        ans += 1LL * col[i] * (added - subtracted);
      }
    }

    cout << ans << '\n';
  }

  return 0;
}