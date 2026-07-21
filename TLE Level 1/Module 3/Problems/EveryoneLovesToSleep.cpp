#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;

  while (t--) {
    int n, H, M;
    cin >> n >> H >> M;

    int current = H * 60 + M;
    int ans = 1440;

    for (int i = 0; i < n; i++) {
      int h, m;
      cin >> h >> m;

      int alarm = h * 60 + m;
      int wait = (alarm - current + 1440) % 1440;
      ans = min(ans, wait);
    }
    cout << ans / 60 << " " << ans % 60 << '\n';
  }
  return 0;
}