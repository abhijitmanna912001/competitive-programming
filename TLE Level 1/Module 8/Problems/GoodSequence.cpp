#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int N;
  cin >> N;

  vector<int> a(N);
  for (int &x : a)
    cin >> x;

  unordered_map<int, int> freq;
  for (int x : a)
    freq[x]++;

  int ans = 0;
  for (auto &[x, count] : freq) {
    if (count > x)
      ans += count - x;
    else if (count < x)
      ans += count;
  }

  cout << ans << '\n';

  return 0;
}