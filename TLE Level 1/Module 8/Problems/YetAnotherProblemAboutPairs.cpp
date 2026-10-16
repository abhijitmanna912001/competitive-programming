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

    vector<int> a(n + 1);
    vector<int> goodIndices;

    for (int i = 1; i <= n; i++) {
      cin >> a[i];

      if (a[i] < i)
        goodIndices.push_back(i);
    }

    long long ans = 0;
    for (int j = 1; j <= n; j++) {
      if (a[j] >= j)
        continue;

      int count = lower_bound(goodIndices.begin(), goodIndices.end(), a[j]) -
                  goodIndices.begin();
      ans += count;
    }
    cout << ans << '\n';
  }

  return 0;
}