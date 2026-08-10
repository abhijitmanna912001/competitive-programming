#include <bits/stdc++.h>
using namespace std;

// a * x + b * y = n
// Diophantine equation

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  long long n, a, b;
  cin >> n >> a >> b;

  for (long long x = 0; x <= n / a; x++) {
    long long remaining = n - x * a;

    if (remaining % b == 0) {
      long long y = remaining / b;

      cout << "YES\n";
      cout << x << " " << y << '\n';
      return 0;
    }
  }
  cout << "NO\n";
  return 0;
}