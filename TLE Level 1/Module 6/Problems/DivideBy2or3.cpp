#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int N;
  cin >> N;

  vector<int> A(N);
  for (int &x : A)
    cin >> x;

  vector<int> cnt2(N, 0);
  vector<int> cnt3(N, 0);

  for (int i = 0; i < N; i++) {
    while (A[i] % 2 == 0) {
      A[i] /= 2;
      cnt2[i]++;
    }

    while (A[i] % 3 == 0) {
      A[i] /= 3;
      cnt3[i]++;
    }
  }

  for (int i = 1; i < N; i++) {
    if (A[i] != A[0]) {
      cout << -1 << '\n';
      return 0;
    }
  }

  int min2 = INT_MAX, min3 = INT_MAX;
  for (int i = 0; i < N; i++) {
    min2 = min(min2, cnt2[i]);
    min3 = min(min3, cnt3[i]);
  }

  int ans = 0;
  for (int i = 0; i < N; i++) {
    ans += cnt2[i] - min2;
    ans += cnt3[i] - min3;
  }

  cout << ans << '\n';
  return 0;
}