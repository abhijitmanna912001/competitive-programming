#include <bits/stdc++.h>
using namespace std;

bool checker(int k, vector<int> &piles, int h) {
  long long hours = 0;

  for (int i = 0; i < piles.size(); i++)
    hours += ((long long)piles[i] + k - 1) / k;
  return hours <= h;
}

int minEatingSpeed(vector<int> &piles, int h) {
  int low = 1, high = INT_MIN;

  for (int i = 0; i < piles.size(); i++)
    high = max(high, piles[i]);

  int ans;
  while (low <= high) {
    int mid = low + (high - low) / 2;
    if (checker(mid, piles, h)) {
      ans = mid;
      high = mid - 1;
    } else
      low = mid + 1;
  }
  return ans;
}

// TC -> O(n log(max(piles)))
// SC -> O(1)

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << "Hello, World" << endl;

  return 0;
}