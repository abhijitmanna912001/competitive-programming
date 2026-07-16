#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;

    string s;
    cin >> s;

    for (char &c : s)
      c = tolower(c);

    string compressed;
    compressed += s[0];

    for (int i = 1; i < n; i++) {
      if (s[i] != s[i - 1])
        compressed += s[i];
    }

    if (compressed == "meow")
      cout << "YES\n";
    else
      cout << "NO\n";
  }
  return 0;
}