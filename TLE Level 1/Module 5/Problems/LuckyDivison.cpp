#include <bits/stdc++.h>
using namespace std;

bool isLucky(int x) {
  while (x > 0) {
    int digit = x % 10;

    if (digit != 4 && digit != 7)
      return false;
    x /= 10;
  }
  return true;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;

  for (int lucky = 1; lucky <= n; lucky++) {
    if (isLucky(lucky) && n % lucky == 0) {
      cout << "YES\n";
      return 0;
    }
  }
  cout << "NO\n";
  return 0;
}