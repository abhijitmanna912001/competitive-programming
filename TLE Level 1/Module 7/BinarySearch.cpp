#include <bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> &a, int target) {
  int low = 0, high = a.size() - 1;

  while (low <= high) {
    int mid = low + (high - low) / 2; // Preventing integer overflow

    if (a[mid] == target)
      return mid;
    else if (a[mid] < target)
      low = mid + 1;
    else
      high = mid - 1;
  }

  return -1;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;
  vector<int> a(n);
  for (int &A : a)
    cin >> A;
  int target;
  cin >> target;
  int index = binarySearch(a, target);
  cout << index << '\n';

  return 0;
}