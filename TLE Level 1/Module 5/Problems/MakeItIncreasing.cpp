#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;

  vector<long long> a(n);
  for (int i = 0; i < n; i++)
    cin >> a[i];

  long long ans = LLONG_MAX;

  for (int i = 0; i < n; i++) {
    long long curr = 0;
    long long last = 0;

    for (int j = i - 1; j >= 0; j--) {
      long long k = last / a[j] + 1;
      curr += k;
      last = k * a[j];
    }
    last = 0;

    for (int j = i + 1; j < n; j++) {
      long long k = last / a[j] + 1;
      curr += k;
      last = k * a[j];
    }
    ans = min(ans, curr);
  }
  cout << ans << endl;
  return 0;
}