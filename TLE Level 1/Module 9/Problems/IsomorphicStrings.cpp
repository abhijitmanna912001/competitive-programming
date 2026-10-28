#include <bits/stdc++.h>
using namespace std;

bool isIsomorphic(string s, string t) {
  if (s.size() != t.size())
    return false;

  unordered_map<char, char> sToT;
  unordered_map<char, char> tToS;

  for (int i = 0; i < s.size(); i++) {
    char a = s[i], b = t[i];

    if (sToT.count(a) && sToT[a] != b)
      return false;
    if (tToS.count(b) && tToS[b] != a)
      return false;

    sToT[a] = b;
    tToS[b] = a;
  }
  return true;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;

  while (t--) {
    string s, t;
    cin >> s >> t;

    if (isIsomorphic(s, t))
      cout << "YES\n";
    else
      cout << "NO\n";
  }

  return 0;
}