#include <bits/stdc++.h>
using namespace std;

int main() {
  int w;
  cin >> w;

  // w is even > part1 + part2
  // w = (w - 2) + 2
  // even - even = even

  // w is odd -> not possible

  // edge case -> follow a trend but it doesn't

  if (w % 2 == 1 || w == 2)
    cout << "NO";
  else
    cout << "YES" << endl;
  return 0;
}