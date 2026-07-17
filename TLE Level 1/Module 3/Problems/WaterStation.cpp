#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;

  int val1 = n % 5;
  int val2 = 5 - val1;

  if (val1 < val2)
    cout << n - val1 << endl;
  else
    cout << n + val2 << endl;
  return 0;
}