#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;

  while (t--) {
    long long n;
    cin >> n;

    vector<long long> a(n);
    for (long long &x : a)
      cin >> x;

    map<long long, long long> mp;
    long long ans = 0;

    for (long long i = 0; i < n; i++) {
      long long key = a[i] - i;
      ans += mp[key];
      mp[key]++;
    }

    cout << ans << '\n';
  }

  return 0;
}