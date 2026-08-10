#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;

  vector<int> a(n);
  for (int i = 0; i < n; i++)
    cin >> a[i];

  vector<int> ans;
  int k = 0;

  for (int i = 0; i < n; i++) {
    ans.push_back(a[i]);

    if (i + 1 < n && gcd(a[i], a[i + 1]) != 1) {
      ans.push_back(1);
      k++;
    }
  }

  cout << k << '\n';
  for (int i = 0; i < ans.size(); i++)
    cout << ans[i] << " ";
  cout << '\n';

  return 0;
}