#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  if (n < 10) {
    cout << 1 << '\n';
    return 0;
  }

  int p = 1;
  while (p * 10 <= n)
    p *= 10;

  int leading = n / p;
  int nextRound = (leading + 1) * p;

  cout << nextRound - n << '\n';
  return 0;
}