#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  string guest, residence, pile;
  cin >> guest >> residence >> pile;

  string combined = guest + residence;

  sort(combined.begin(), combined.end());
  sort(pile.begin(), pile.end());

  if (combined == pile)
    cout << "YES" << '\n';
  else
    cout << "NO" << endl;

  return 0;
}