#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int N, M;
  cin >> N >> M;

  int a[50][50];

  for (int i = 0; i < M; i++) {
    for (int j = 0; j < N; j++)
      cin >> a[i][j];
  }

  bool together[51][51] = {};

  for (int i = 0; i < M; i++) {
    for (int j = 0; j < N - 1; j++) {
      int x = a[i][j];
      int y = a[i][j + 1];
      together[x][y] = true;
      together[y][x] = true;
    }
  }

  int ans = 0;
  for (int i = 1; i <= N; i++) {
    for (int j = i + 1; j <= N; j++) {
      if (!together[i][j])
        ans++;
    }
  }

  cout << ans << "\n";
  return 0;
}