#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int T;
  cin >> T;

  while (T--) {
    int N;
    cin >> N;

    vector<int> tops;

    for (int i = 0; i < N; i++) {
      int x;
      cin >> x;

      auto it = upper_bound(tops.begin(), tops.end(), x);

      if (it != tops.end())
        *it = x;
      else
        tops.push_back(x);
    }

    cout << tops.size();

    for (int x : tops)
      cout << " " << x;
    cout << '\n';
  }

  return 0;
}