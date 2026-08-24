#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  long long n;
  cin >> n;

  long long k = n / 2;

  if (n % 2 == 0)
    cout << (k + 1) * (k + 1) << '\n';
  else
    cout << 2 * (k + 1) * (k + 2) << '\n';
  return 0;
}