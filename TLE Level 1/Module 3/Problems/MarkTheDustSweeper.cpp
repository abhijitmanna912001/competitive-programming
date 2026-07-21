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

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
      cin >> arr[i];

    int last = n - 1;
    while (last >= 0 && arr[last] == 0)
      last--;

    long long ans = 0;
    bool started = false;

    for (int i = 0; i < n - 1; i++) {
      if (arr[i] > 0) {
        started = true;
        ans += arr[i];
      } else if (started)
        ans++;
    }

    cout << ans << '\n';
  }
  return 0;
}