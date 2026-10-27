#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  string s;
  cin >> s;

  for (char ch : s) {
    ch = tolower(ch);

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'y')
      continue;

    cout << "." << ch;
  }

  return 0;
}