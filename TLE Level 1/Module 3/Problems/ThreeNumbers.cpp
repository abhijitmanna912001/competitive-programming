#include <bits/stdc++.h>
using namespace std;

// X + Y + Z = S
// Z = S - X - Y

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int K, S;
  cin >> K >> S;

  int count = 0;

  for (int x = 0; x <= K; x++) {
    for (int y = 0; y <= K; y++) {
      int z = S - x - y;
      if (z >= 0 && z <= K)
        count++;
    }
  }

  cout << count << "\n";
  return 0;
}