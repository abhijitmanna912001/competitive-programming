#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  string name;
  cin >> name;

  unordered_set<char> s;
  for (auto c : name)
    s.insert(c);

  if (s.size() % 2 == 1)
    cout << "IGNORE HIM!" << '\n';
  else
    cout << "CHAT WITH HER!" << '\n';

  return 0;
}