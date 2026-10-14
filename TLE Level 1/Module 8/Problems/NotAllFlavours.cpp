#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int T;
  cin >> T;

  while (T--) {
    int N, K;
    cin >> N >> K;

    vector<int> A(N);
    for (int &a : A)
      cin >> a;

    vector<int> lastIdx(K + 1, -1);
    int maxLength = 0;

    for (int i = 0; i < N; i++) {
      int flavour = A[i];

      int gapLength = i - lastIdx[flavour] - 1;
      maxLength = max(maxLength, gapLength);
      lastIdx[flavour] = i;
    }

    for (int flavour = 1; flavour <= K; flavour++) {
      int suffixLength = N - 1 - lastIdx[flavour];
      maxLength = max(maxLength, suffixLength);
    }

    cout << maxLength << '\n';
  }

  return 0;
}