#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;

  vector<int> a(2 * n);
  for (int &x : a)
    cin >> x;

  sort(a.begin(), a.end());

  long long sum1 = 0, sum2 = 0;
  for (int i = 0; i < n; i++) {
    sum1 += a[i];
    sum2 += a[n + i];
  }

  if (sum1 == sum2) {
    cout << -1 << '\n';
    return 0;
  }

  for (int x : a)
    cout << x << ' ';

  cout << '\n';

  return 0;
}