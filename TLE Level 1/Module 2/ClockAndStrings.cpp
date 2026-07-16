#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;

  while (t--) {
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    if (a > b)
      swap(a, b);

    bool cInside = (a < c && c < b);
    bool dInside = (a < d && d < b);

    if (cInside != dInside)
      cout << "YES\n";
    else
      cout << "NO\n";
  }
  return 0;
}