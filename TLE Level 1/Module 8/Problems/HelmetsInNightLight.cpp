#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;

  while (t--) {
    int n, p;
    cin >> n >> p;

    vector<int> a(n), b(n);
    for (int &x : a)
      cin >> x;

    for (int &x : b)
      cin >> x;

    vector<pair<int, int>> v;

    for (int i = 0; i < n; i++)
      v.push_back({b[i], a[i]});

    sort(v.begin(), v.end());

    long long cost = p;
    int remaining = n - 1;

    for (int i = 0; i < n && remaining > 0; i++) {
      if (v[i].first >= p)
        break;

      int take = min(v[i].second, remaining);
      cost += 1LL * take * v[i].first;
      remaining -= take;
    }

    cost += 1LL * remaining * p;
    cout << cost << "\n";
  }
  return 0;
}