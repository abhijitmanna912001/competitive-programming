#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;

  vector<int> x(n);
  for (auto &i : x)
    cin >> i;

  for (auto &i : x) {
    int cnt = 0;

    for (int j = 1; j * j <= i; j++) {
      if (i % j == 0) {
        if (j == i / j)
          cnt++;
        else
          cnt += 2;
      }
    }
    cout << cnt << '\n';
  }

  return 0;
}