#include <bits/stdc++.h>
using namespace std;

bool isPrime(long long n) {
  if (n <= 1)
    return false;

  for (long long i = 2; i * i <= n; i++) {
    if (n % i == 0)
      return false;
  }
  return true;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;

  while (t--) {
    long long a, b;
    cin >> a >> b;

    if ((a - b) == 1 && isPrime(a + b))
      cout << "YES\n";
    else
      cout << "NO\n";
  }

  return 0;
}