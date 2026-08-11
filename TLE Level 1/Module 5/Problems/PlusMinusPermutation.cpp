#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;

  while (t--) {
    long long n, x, y;
    cin >> n >> x >> y;

    long long common = lcm(x, y);

    long long positiveCount = n / x - n / common;
    long long negativeCount = n / y - n / common;

    long long positiveSum = positiveCount * (2 * n - positiveCount + 1) / 2;
    long long negativeSum = negativeCount * (negativeCount + 1) / 2;

    cout << positiveSum - negativeSum << endl;
  }

  return 0;
}