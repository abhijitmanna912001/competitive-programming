#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;

  vector<int> arr(n);

  for (int i = 0; i < n; i++)
    cin >> arr[i];

  bool ok = true;
  int state = 0;

  for (int i = 0; i < n - 1; i++) {
    if (arr[i] < arr[i + 1]) {
      if (state == 1 || state == 2) {
        ok = false;
        break;
      }
    } else if (arr[i] == arr[i + 1]) {
      if (state == 2) {
        ok = false;
        break;
      }
      state = 1;
    } else
      state = 2;
  }

  cout << (ok ? "YES" : "NO") << '\n';
  return 0;
}