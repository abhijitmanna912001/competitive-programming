#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string &s) {
  int i = 0, j = s.length() - 1;

  while (i < j) {
    if (s[i] != s[j])
      return false;
    i++;
    j--;
  }
  return true;
}

bool allSame(string &s) {
  char first = s[0];

  for (char ch : s) {
    if (ch != first)
      return false;
  }
  return true;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;

  while (t--) {
    int n, k;
    cin >> n >> k;

    string s;
    cin >> s;

    while (k > 0) {
      if (allSame(s)) {
        int finalLen = s.length() + k;
        s = string(finalLen, s[0]);
        break;
      }
      if (isPalindrome(s)) {
        char last = s.back();
        s.push_back(last);
      } else {
        string t = s.substr(0, s.length() / 2);
        s = t;
      }
      k--;
    }

    cout << s << '\n';
  }
  return 0;
}