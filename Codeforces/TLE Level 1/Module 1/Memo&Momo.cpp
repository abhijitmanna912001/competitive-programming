#include <bits/stdc++.h>
using namespace std;

int main() {
  long long a, b, k;
  cin >> a >> b >> k;

  bool adiv = (a % k == 0);
  bool bdiv = (b % k == 0);

  if (adiv && bdiv)
    cout << "Both";

  else if (adiv)
    cout << "Memo";

  else if (bdiv)
    cout << "Momo";
  else
    cout << "No One" << endl;
  return 0;
}