#include <bits/stdc++.h>
using namespace std;

int lowerBound(vector<int> &arr, int start, int target) {
  int low = start, high = arr.size() - 1, ans = arr.size();

  while (low <= high) {
    int mid = low + (high - low) / 2;

    if (arr[mid] >= target) {
      ans = mid;
      high = mid - 1;
    } else
      low = mid + 1;
  }
  return ans;
}

int upperBound(vector<int> &arr, int start, int target) {
  int low = start, high = arr.size() - 1, ans = arr.size();

  while (low <= high) {
    int mid = low + (high - low) / 2;

    if (arr[mid] > target) {
      ans = mid;
      high = mid - 1;
    } else
      low = mid + 1;
  }
  return ans;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;

  while (t--) {
    int n;
    long long l, r;
    cin >> n >> l >> r;

    vector<int> arr(n);
    for (int &x : arr)
      cin >> x;

    sort(arr.begin(), arr.end());

    long long ans = 0;
    for (int i = 0; i < n; i++) {
      long long minValue = l - arr[i];
      long long maxValue = r - arr[i];

      int left = lowerBound(arr, i + 1, minValue);
      int right = upperBound(arr, i + 1, maxValue);

      ans += right - left;
    }
    cout << ans << '\n';
  }
  return 0;
}