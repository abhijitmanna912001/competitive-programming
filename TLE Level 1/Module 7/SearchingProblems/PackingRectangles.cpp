#include <bits/stdc++.h>
using namespace std;

bool canFit(long long x, long long w, long long h, long long n) {
  return (x / w) * (x / h) >= n;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  long long w, h, n;
  cin >> w >> h >> n;

  long long low = 0, high = 1;
  while (!canFit(high, w, h, n)) {
    high *= 2;
  }

  while (low + 1 < high) {
    long long mid = low + (high - low) / 2;
    if (canFit(mid, w, h, n))
      high = mid;
    else
      low = mid;
  }

  cout << high << endl;

  return 0;
}