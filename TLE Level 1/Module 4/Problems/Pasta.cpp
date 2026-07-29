#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int N, M;
  cin >> N >> M;

  vector<long long> A(N), B(M);

  for (auto &a : A)
    cin >> a;
  for (auto &b : B)
    cin >> b;

  for (int i = 0; i < M; i++) {
    bool found = false;

    for (int j = 0; j < N; j++) {
      if (A[j] == B[i]) {
        A[j] = -1;
        found = true;
        break;
      }
    }

    if (!found) {
      cout << "No\n";
      return 0;
    }
  }

  cout << "Yes\n";
  return 0;
}