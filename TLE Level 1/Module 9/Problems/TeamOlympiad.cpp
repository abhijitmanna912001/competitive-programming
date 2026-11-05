#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;

  vector<int> t(n);
  for (int &x : t)
    cin >> x;

  vector<int> pg, mt, pe;
  for (int i = 0; i < n; i++) {
    if (t[i] == 1)
      pg.push_back(i);
    else if (t[i] == 2)
      mt.push_back(i);
    else
      pe.push_back(i);
  }

  int w = min(pg.size(), min(mt.size(), pe.size()));
  cout << w << '\n';

  for (int i = 0; i < w; i++)
    cout << pg[i] + 1 << ' ' << mt[i] + 1 << ' ' << pe[i] + 1 << '\n';

  return 0;
}