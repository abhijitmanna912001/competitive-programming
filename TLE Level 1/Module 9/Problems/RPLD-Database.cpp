#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int T;
  cin >> T;

  for (int tc = 1; tc <= T; tc++) {
    int N, R;
    cin >> N >> R;

    set<pair<int, int>> seen;
    bool corrupted = false;

    for (int i = 0; i < R; i++) {
      int I, C;
      cin >> I >> C;

      if (!seen.insert({I, C}).second)
        corrupted = true;
    }

    cout << "Scenario #" << tc << ":\n";
    cout << (corrupted ? "impossible" : "possible") << "\n\n";
  }

  return 0;
}

// TC -> O(R log R)
// SC -> O(R)