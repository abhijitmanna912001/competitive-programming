#include <bits/stdc++.h>
using namespace std;

int main() {
  // n members, including yourself(1), k opinions
  // Y members agree, N members disagree

  // if(Y > N) all disagreed leave
  // if(Y < N) all agreed leave
  // if(Y = N) all leave

  // goal -> stay and maximize members remaining
  // when expelling -> exclude yourself before meeting

  // (1 <= n, k <= 100)
  // summation of n * k <= 5 * 10^4

  // in every discussion, the group that contains you, must be majority
  // if ans -> Y, then Y > N must hold
  // if ans -> N, then N > Y must hold
  // otherwise you elimiated

  // if person to remain with you till end, they cannot disagree with you even
  // once

  int t;
  cin >> t;

  while (t--) {
    int n, k;
    cin >> n >> k;

    string me;
    cin >> me;

    int ans = 1;
    for (int i = 1; i < n; i++) {
      string s;
      cin >> s;

      if (s == me)
        ans++;
    }
    cout << ans << '\n';
  }

  return 0;
}