#include <bits/stdc++.h>
using namespace std;

long long getMaxDistance() {
  int k;
  cin >> k;

  int first, last;
  cin >> first;

  last = first;
  for (int i = 1; i < k; i++)
    cin >> last;

  return last - first;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;

  while (t--) {
    int w, h;
    cin >> w >> h;

    long long ans = 0;

    ans = max(ans, getMaxDistance() * h);
    ans = max(ans, getMaxDistance() * h);

    ans = max(ans, getMaxDistance() * w);
    ans = max(ans, getMaxDistance() * w);

    cout << ans << '\n';
  }

  return 0;
}