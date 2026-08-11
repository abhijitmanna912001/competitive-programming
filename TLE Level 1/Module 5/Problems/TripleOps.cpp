#include <bits/stdc++.h>
using namespace std;

int cost(int x) {
  int cnt = 0;

  while (x > 0) {
    x /= 3;
    cnt++;
  }
  return cnt;
}

int rangeCost(int l, int r) {
  int ans = 0;
  long long left = 1;
  int steps = 1;

  while (left <= r) {
    long long right = left * 3 - 1;

    int lo = max<long long>(l, left);
    int hi = min<long long>(r, right);

    if (lo <= hi)
      ans += (hi - lo + 1) * steps;
    left *= 3;
    steps++;
  }
  return ans;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;

  while (t--) {
    int l, r;
    cin >> l >> r;

    int ans = rangeCost(l, r) + cost(l);
    cout << ans << endl;
  }
  return 0;
}