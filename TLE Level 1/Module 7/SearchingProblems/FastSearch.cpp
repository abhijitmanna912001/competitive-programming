#include <bits/stdc++.h>
using namespace std;

int countLessThanOrEqual(const vector<int> &a, int x) {
  int low = 0, high = a.size() - 1, ans = 0;

  while (low <= high) {
    int mid = low + (high - low) / 2;

    if (a[mid] <= x) {
      ans = mid + 1;
      low = mid + 1;
    } else
      high = mid - 1;
  }
  return ans;
}

int countLessThan(const vector<int> &a, int x) {
  int low = 0, high = a.size() - 1, ans = 0;

  while (low <= high) {
    int mid = low + (high - low) / 2;

    if (a[mid] < x) {
      ans = mid + 1;
      low = mid + 1;
    } else
      high = mid - 1;
  }
  return ans;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;

  vector<int> a(n);
  for (int &x : a)
    cin >> x;

  sort(a.begin(), a.end());

  int k;
  cin >> k;

  for (int i = 0; i < k; i++) {
    int l, r;
    cin >> l >> r;

    int rightCount = countLessThanOrEqual(a, r);
    int leftCount = countLessThan(a, l);

    cout << rightCount - leftCount << " ";
  }

  return 0;
}