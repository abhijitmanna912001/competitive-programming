#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;

  while (t--) {
    string s;
    cin >> s;

    int freq[26] = {};
    for (char c : s)
      freq[c - 'a']++;

    int painted = 0;
    for (int i = 0; i < 26; i++)
      painted += min(freq[i], 2);

    cout << painted / 2 << '\n';
  }
  return 0;
}