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

    map<int, int> freq;
    set<int> sizes;

    for (int i = 0; i < n; i++) {
      int x;
      cin >> x;

      freq[x]++;
      sizes.insert(x);
    }

    int ans = 0;
    for (int x : sizes) {
      int current = freq[x];
      int previous = freq[x - 1];

      if (sizes.find(x - 1) == sizes.end())
        ans += current;
      else
        ans += max(0, current - previous);
    }

    cout << ans << '\n';
  }

  return 0;
}