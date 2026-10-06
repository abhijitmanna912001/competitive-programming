#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  long long x;
  cin >> n >> x;

  // Let to TLE - Brute Force Approach
  //   vector<long long> a(n);
  //   unordered_map<long long, int> mp;
  //   for (int i = 0; i < n; i++) {
  //     cin >> a[i];

  //     long long need = x - a[i];

  //     if (mp.find(need) != mp.end()) {
  //       cout << mp[need] << " " << i + 1 << '\n';
  //       return 0;
  //     }
  //     mp[a[i]] = i + 1;
  //   }

  vector<pair<long long, int>> a(n);

  for (int i = 0; i < n; i++) {
    cin >> a[i].first;
    a[i].second = i + 1;
  }

  sort(a.begin(), a.end());
  int left = 0, right = n - 1;

  while (left < right) {
    long long sum = a[left].first + a[right].first;

    if (sum == x) {
      cout << a[left].second << " " << a[right].second << '\n';
      return 0;
    }

    if (sum < x) {
      left++;
    } else
      right--;
  }

  cout << "IMPOSSIBLE" << '\n';

  return 0;
}