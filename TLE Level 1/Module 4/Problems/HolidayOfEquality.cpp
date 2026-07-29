#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;

  vector<int> a(n);
  for (auto &i : a)
    cin >> i;

  int mx = *max_element(a.begin(), a.end());
  int ans = 0;

  for (int x : a)
    ans += mx - x;

  cout << ans << '\n';
  return 0;
}