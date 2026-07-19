#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int N;
  cin >> N;

  vector<string> A(N);
  for (int i = 0; i < N; i++)
    cin >> A[i];

  vector<string> B = A;
  for (int j = 1; j < N; j++)
    B[0][j] = A[0][j - 1];

  for (int i = 1; i < N; i++)
    B[i][N - 1] = A[i - 1][N - 1];

  for (int j = 0; j < N - 1; j++)
    B[N - 1][j] = A[N - 1][j + 1];

  for (int i = 0; i < N - 1; i++)
    B[i][0] = A[i + 1][0];

  for (int i = 0; i < N; i++)
    cout << B[i] << "\n";
  return 0;
}