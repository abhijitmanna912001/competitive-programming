#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;

  vector<int> boxes(n);
  for (int &box : boxes)
    cin >> box;

  sort(boxes.begin(), boxes.end());
  int count = 1, ans = 1;

  for (int i = 1; i < n; i++) {
    if (boxes[i] == boxes[i - 1])
      count++;
    else
      count = 1;
    ans = max(ans, count);
  }

  cout << ans << '\n';

  return 0;
}