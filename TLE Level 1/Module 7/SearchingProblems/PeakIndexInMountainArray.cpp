#include <bits/stdc++.h>
using namespace std;

int peakIndexInMountainArray(vector<int> &arr) {
  int low = 0, high = arr.size() - 1;

  while (low <= high) {
    int mid = low + (high - low) / 2;

    if (arr[mid] < arr[mid + 1])
      low = mid + 1;
    else
      high = mid - 1;
  }
  return low;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;

  vector<int> arr(n);
  for (int i = 0; i < n; i++)
    cin >> arr[i];

  cout << peakIndexInMountainArray(arr) << '\n';

  return 0;
}