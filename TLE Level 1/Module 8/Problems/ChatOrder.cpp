#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;

  vector<string> names(n);
  for (int i = 0; i < n; i++)
    cin >> names[i];

  unordered_set<string> names_set;

  vector<string> chat_order;

  for (int i = n - 1; i >= 0; i--) {
    if (names_set.find(names[i]) == names_set.end()) {
      chat_order.push_back(names[i]);
      names_set.insert(names[i]);
    }
  }

  for (const string &name : chat_order)
    cout << name << '\n';

  return 0;
}