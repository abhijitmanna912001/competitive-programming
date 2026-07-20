#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int H, W;
  cin >> H >> W;

  vector<string> A(H), B(H);

  for (int i = 0; i < H; i++)
    cin >> A[i];
  for (int i = 0; i < H; i++)
    cin >> B[i];

  for (int s = 0; s < H; s++) {
    for (int t = 0; t < W; t++) {
      bool ok = true;

      for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
          int row = (i + s) % H;
          int col = (j + t) % W;

          if (A[row][col] != B[i][j]) {
            ok = false;
            break;
          }
        }

        if (!ok) {
          break;
        }
      }
      if (ok) {
        cout << "Yes\n";
        return 0;
      }
    }
  }
  
  cout << "No\n";
  return 0;
}