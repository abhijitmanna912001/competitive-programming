#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int &x : a)
      cin >> x;

    unordered_set<int> s;

    for (int i = 0; i < n; i++) {
      while (a[i] % 2 == 0) {
        s.insert(a[i]);
        a[i] /= 2;
      }
    }

    cout << s.size() << '\n';
  }

  return 0;
}