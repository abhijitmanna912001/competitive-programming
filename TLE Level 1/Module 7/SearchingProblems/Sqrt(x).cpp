#include <bits/stdc++.h>
using namespace std;

int mySqrt(int x) {
  int low = 1, high = x, ans = 0;

  while (low <= high) {
    int mid = low + (high - low) / 2;
    if (1LL * mid * mid <= x) {
      ans = mid;
      low = mid + 1;
    } else
      high = mid - 1;
  }
  return ans;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int x;
  cin >> x;

  cout << mySqrt(x) << '\n';

  return 0;
}