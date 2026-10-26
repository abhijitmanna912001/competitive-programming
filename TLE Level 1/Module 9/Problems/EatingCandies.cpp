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

    vector<int> candies(n);
    for (int &x : candies)
      cin >> x;

    int left = 0, right = n - 1;
    int leftSum = 0, rightSum = 0;
    int maxCandies = 0;

    while (left <= right) {
      if (leftSum <= rightSum) {
        leftSum += candies[left];
        left++;
      } else {
        rightSum += candies[right];
        right--;
      }

      if (leftSum == rightSum)
        maxCandies = left + (n - 1 - right);
    }

    cout << maxCandies << "\n";
  }

  return 0;
}