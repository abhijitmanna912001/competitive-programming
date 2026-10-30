#include <bits/stdc++.h>
using namespace std;

string normalize(const string &str) {
  string result;

  for (unsigned char ch : str) {
    if (ch == '-' || ch == ';' || ch == '_')
      continue;

    result += static_cast<char>(tolower(ch));
  }

  return result;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  string s1, s2, s3;
  cin >> s1 >> s2 >> s3;

  s1 = normalize(s1);
  s2 = normalize(s2);
  s3 = normalize(s3);

  vector<string> v = {s1, s2, s3};
  sort(v.begin(), v.end());

  set<string> valid;

  do {
    string temp = v[0] + v[1] + v[2];
    valid.insert(temp);
  } while (next_permutation(v.begin(), v.end()));

  int n;
  cin >> n;

  while (n--) {
    string ans;
    cin >> ans;

    ans = normalize(ans);

    if (valid.count(ans))
      cout << "ACC" << '\n';
    else
      cout << "WA" << '\n';
  }

  return 0;
}