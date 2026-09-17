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

    vector<int> b(n * (n - 1) / 2);
    for (int &x : b)
      cin >> x;

    sort(b.begin(), b.end());

    int idx = 0;
    for (int rem = n - 1; rem >= 1; rem--) {
      cout << b[idx] << " ";
      idx += rem;
    }

    cout << 1000000000 << endl;
  }

  return 0;
}