#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  long long s;
  int n;
  cin >> s >> n;

  vector<pair<long long, long long>> dragons(n);
  for (int i = 0; i < n; i++)
    cin >> dragons[i].first >> dragons[i].second;

  sort(dragons.begin(), dragons.end());

  for (int i = 0; i < n; i++) {
    if (s > dragons[i].first)
      s += dragons[i].second;
    else {
      cout << "NO\n";
      return 0;
    }
  }
  cout << "YES\n";
  return 0;
}

// TC -> O(n log n)
// SC -> O(n)