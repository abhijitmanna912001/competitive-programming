#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  string s;
  getline(cin, s);

  string ans;

  for (int i = 0; i < s.size(); i++) {
    if (s[i] >= 'a' && s[i] <= 'z')
      ans.push_back(s[i]);

    else if (s[i] == ' ') {
      if (!ans.empty() && ans.back() != ' ')
        ans.push_back(' ');
    } else {
      if (!ans.empty() && ans.back() == ' ')
        ans.pop_back();
      ans.push_back(s[i]);
      ans.push_back(' ');
    }
  }

  if (!ans.empty() && ans.back() == ' ')
    ans.pop_back();
  cout << ans << '\n';

  return 0;
}