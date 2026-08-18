#include <bits/stdc++.h>
using namespace std;

void factorize(long long n) {
  for (long long d = 2; d * d <= n; d++) {
    if (n % d == 0) {
      int cnt = 0;

      while (n % d == 0) {
        cnt++;
        n /= d;
      }

      cout << d << "^" << cnt << " ";
    }
  }

  if (n > 1)
    cout << n << "^1";
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  long long n;

  while (cin >> n && n != 0) {
    factorize(n);
    cout << '\n';
  }
  return 0;
}