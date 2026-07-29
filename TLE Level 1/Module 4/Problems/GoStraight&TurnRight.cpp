#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int N;
  string T;
  cin >> N >> T;

  int x = 0, y = 0;
  int dir = 0;

  int dx[] = {1, 0, -1, 0};
  int dy[] = {0, -1, 0, 1};

  for (char c : T) {
    if (c == 'R')
      dir = (dir + 1) % 4;
    else {
      x += dx[dir];
      y += dy[dir];
    }
  }

  cout << x << " " << y << '\n';

  return 0;
}