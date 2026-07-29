#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int N, W;
  cin >> N >> W;

  vector<int> A(N);
  for (auto &a : A)
    cin >> a;

  vector<bool> good(W + 1, false);

  for (int i = 0; i < N; i++)
    if (A[i] <= W)
      good[A[i]] = true;

  for (int i = 0; i < N; i++) {
    for (int j = i + 1; j < N; j++) {
      int sum = A[i] + A[j];
      if (sum <= W)
        good[sum] = true;
    }
  }

  for (int i = 0; i < N; i++) {
    for (int j = i + 1; j < N; j++) {
      for (int k = j + 1; k < N; k++) {
        int sum = A[i] + A[j] + A[k];

        if (sum <= W)
          good[sum] = true;
      }
    }
  }

  int count = 0;

  for (int i = 1; i <= W; i++)
    if (good[i])
      count++;

  cout << count << '\n';
  return 0;
}