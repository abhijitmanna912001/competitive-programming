#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, k;
  cin >> n >> k;

  vector<int> arr(n);
  for (int &x : arr)
    cin >> x;

  for (int i = 0; i < k; i++) {
    int query;
    cin >> query;

    int low = 0, high = n - 1, ans = -1;
    while (low <= high) {
      int mid = (low + high) / 2;
      if (arr[mid] <= query) {
        ans = mid;
        low = mid + 1;
      } else
        high = mid - 1;
    }
    cout << ans + 1 << '\n';
  }
  return 0;
}