#include <bits/stdc++.h>
using namespace std;

// queue -> n people

// T = 0 BGGBG , B<->GGB<->G 1s -> GBGGB
// T = 0 BGGBG, T = 1s GB<->GGB,  2s -> GGBGB
// GGGB 1s > GGGB

int main() {
  int n, t;
  cin >> n >> t;

  string s;
  cin >> s;

  for (int i = 0; i < t; i++) {
    for (int j = 0; j < n - 1; j++) {
      if (s[j] == 'B' && s[j + 1] == 'G') {
        swap(s[j], s[j + 1]);
        j++;
      }
    }
  }

  cout << s << endl;
  return 0;
}