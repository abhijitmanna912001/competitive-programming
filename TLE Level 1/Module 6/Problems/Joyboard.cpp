#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;

  while (t--) {
    int n, m, k;
    cin >> n >> m >> k;

    if (k == 1)
      cout << 1 << '\n';
    else if (k == 2)
      cout << min(m, n - 1) + m / n << '\n';
    else if (k == 3)
      cout << m - min(m, n - 1) - m / n << '\n';
    else
      cout << 0 << '\n';
  }

  return 0;
}