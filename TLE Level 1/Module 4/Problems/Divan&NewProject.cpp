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
    for (auto &i : a)
      cin >> i;

    vector<pair<int, int>> buildings;
    for (int i = 0; i < n; i++)
      buildings.push_back({a[i], i});

    sort(buildings.begin(), buildings.end(), greater<pair<int, int>>());

    vector<long long> ans(n + 1);
    long long total = 0;
    int dist = 1, sign = 1;

    for (int i = 0; i < n; i++) {
      int freq = buildings[i].first;
      int idx = buildings[i].second;
      long long coordinate = sign * dist;
      ans[idx + 1] = coordinate;
      total += 2LL * freq * dist;
      sign *= -1;

      if (sign == 1)
        dist++;
    }

    cout << total << '\n';
    for (auto x : ans)
      cout << x << " ";
    cout << '\n';
  }

  return 0;
}