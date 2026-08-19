#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  long long N;
  cin >> N;

  vector<long long> a(N);
  for (long long &A : a)
    cin >> A;

  long long ans = 0;
  for (int x : a)
    ans += x - 1;

  cout << ans << '\n';
  return 0;
}