#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;

  while (t--) {
    int n, k;
    cin >> n >> k;

    map<int, int> freq;

    for (int i = 0; i < n; i++) {
      int x;
      cin >> x;
      freq[x]++;
    }

    vector<int> valid;
    for (auto [x, count] : freq) {
      if (count >= k)
        valid.push_back(x);
    }

    if (valid.empty()) {
      cout << -1 << '\n';
      continue;
    }

    int start = valid[0];
    int bestL = valid[0];
    int bestR = valid[0];

    for (int i = 1; i < (int)valid.size(); i++) {
      if (valid[i] == valid[i - 1] + 1) {
        if (valid[i] - start > bestR - bestL) {
          bestL = start;
          bestR = valid[i];
        }
      } else
        start = valid[i];
    }

    cout << bestL << ' ' << bestR << '\n';
  }

  return 0;
}