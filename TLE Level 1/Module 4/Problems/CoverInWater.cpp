#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;

    string s;
    cin >> s;

    int ans = 0, i = 0;

    int dots = 0;

    for (char c : s) {
      if (c == '.')
        dots++;
    }

    if (s.find("...") != string::npos)
      cout << 2 << '\n';
    else
      cout << dots << '\n';
  }
  return 0;
}