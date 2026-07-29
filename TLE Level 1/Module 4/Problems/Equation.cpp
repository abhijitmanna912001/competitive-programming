#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;

  if (n % 2 == 0)
    cout << n + 4 << " " << 4;
  else
    cout << n + 9 << " " << 9;
  return 0;
}