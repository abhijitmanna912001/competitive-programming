#include <bits/stdc++.h>
using namespace std;

bool isPrime(int x) {
  if (x < 2)
    return false;

  for (int i = 2; i * i <= x; i++) {
    if (x % i == 0)
      return false;
  }
  return true;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, k;
  cin >> n >> k;

  int prevPrime = -1, count = 0;

  for (int i = 2; i <= n; i++) {
    if (isPrime(i)) {
      if (prevPrime != -1) {
        int candidate = prevPrime + i + 1;
        if (candidate <= n && isPrime(candidate))
          count++;
      }
      prevPrime = i;
    }
  }

  if (count >= k)
    cout << "YES\n";
  else
    cout << "NO\n";
  return 0;
}