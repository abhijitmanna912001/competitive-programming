#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;

  unordered_map<string, int> names;

  for (int i = 0; i < n; i++) {
    string name;
    cin >> name;

    if (names[name] == 0)
      cout << "OK" << '\n';
    else
      cout << name << names[name] << '\n';
    names[name]++;
  }

  return 0;
}

// Time Complexity: O(n)
// Space Complexity: O(n)