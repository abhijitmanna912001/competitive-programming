#include <bits/stdc++.h>
using namespace std;

// this function returns the largest integer x such that x * x <= 100
int largestX() {
  int low = 1, high = 100;
  int ans = -1;

  while (low <= high) {
    int mid = low + (high - low) / 2;

    if (mid * mid <= 100) {
      ans = mid;
      low = mid + 1;
    } else
      high = mid - 1;
  }

  return ans;
}

// TC -> O(logN)
// SC -> O(1)

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << "Hello, World" << endl;

  return 0;
}