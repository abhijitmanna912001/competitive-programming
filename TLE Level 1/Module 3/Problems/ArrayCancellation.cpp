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

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
      cin >> arr[i];

    long long ans = 0;
    long long surplus = 0;

    for (int x : arr) {
      if (x >= 0)
        surplus += x;
      else {
        long long need = -1LL * x;
        if (surplus >= need)
          surplus -= need;
        else {
          ans += need - surplus;
          surplus = 0;
        }
      }
    }

    cout << ans << '\n';
  }
  return 0;
}