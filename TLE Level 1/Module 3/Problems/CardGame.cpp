#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;

  while (t--) {
    int a1, a2, b1, b2;
    cin >> a1 >> a2 >> b1 >> b2;

    int s[2][2] = {{a1, a2}, {a2, a1}};

    int b[2][2] = {{b1, b2}, {b2, b1}};

    int ans = 0;

    for (int i = 0; i < 2; i++) {
      for (int j = 0; j < 2; j++) {
        int suneetWins = 0, slavicWins = 0;

        if (s[i][0] > b[j][0])
          suneetWins++;
        else if (s[i][0] < b[j][0])
          slavicWins++;

        if (s[i][1] > b[j][1])
          suneetWins++;
        else if (s[i][1] < b[j][1])
          slavicWins++;

        if (suneetWins > slavicWins)
          ans++;
      }
    }
    cout << ans << '\n';
  }
  return 0;
}