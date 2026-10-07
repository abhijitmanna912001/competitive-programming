#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int T;
  cin >> T;

  while (T--) {
    int N, M, K;
    cin >> N >> M >> K;

    vector<pair<int, int>> plants(K);

    for (int i = 0; i < K; i++) {
      int r, c;
      cin >> r >> c;
      plants[i] = {r, c};
    }

    set<pair<int, int>> plantSet(plants.begin(), plants.end());

    int sharedSides = 0;

    for (auto [r, c] : plants) {
      if (plantSet.count({r, c + 1}))
        sharedSides++;

      if (plantSet.count({r + 1, c}))
        sharedSides++;
    }

    int ans = 4 * K - 2 * sharedSides;
    cout << ans << '\n';
  }
  return 0;
}