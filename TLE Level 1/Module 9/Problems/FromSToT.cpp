#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int q;
  cin >> q;

  while (q--) {
    string s, t, p;
    cin >> s >> t >> p;

    int freq[26] = {};

    for (char c : p)
      freq[c - 'a']++;

    int i = 0, j = 0;

    while (j < (int)t.size()) {
      if (i < (int)s.size() && s[i] == t[j])
        i++;
      else
        freq[t[j] - 'a']--;
      j++;
    }

    bool possible = (i == (int)s.size());

    for (int k = 0; k < 26; k++) {
      if (freq[k] < 0) {
        possible = false;
        break;
      }
    }

    cout << (possible ? "YES" : "NO") << '\n';
  }
  return 0;
}