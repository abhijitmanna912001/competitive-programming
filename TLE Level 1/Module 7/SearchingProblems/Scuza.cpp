#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;

  while (t--) {
    int n, q;
    cin >> n >> q;

    vector<long long> a(n);
    for (long long &x : a)
      cin >> x;

    vector<long long> k(q);
    for (long long &x : k)
      cin >> x;

    vector<long long> prefixMax(n), prefixSum(n);

    prefixMax[0] = a[0];
    prefixSum[0] = a[0];

    for (int i = 1; i < n; i++) {
      prefixMax[i] = max(prefixMax[i - 1], a[i]);
      prefixSum[i] = prefixSum[i - 1] + a[i];
    }

    for (long long x : k) {
      int left = 0, right = n - 1, ans = -1;

      while (left <= right) {
        int mid = left + (right - left) / 2;

        if (prefixMax[mid] <= x) {
          ans = mid;
          left = mid + 1;
        } else
          right = mid - 1;
      }

      if (ans == -1)
        cout << 0 << ' ';
      else
        cout << prefixSum[ans] << " ";
    }
    cout << '\n';
  }

  return 0;
}