#include <bits/stdc++.h>
using namespace std;

bool canMake(long long burgers, long long nb, long long ns, long long nc,
             long long pb, long long ps, long long pc, long long r,
             long long needB, long long needS, long long needC) {
  long long requiredB = burgers * needB;
  long long requiredS = burgers * needS;
  long long requiredC = burgers * needC;

  long long buyB = max(0LL, requiredB - nb);
  long long buyS = max(0LL, requiredS - ns);
  long long buyC = max(0LL, requiredC - nc);

  long long cost = buyB * pb + buyS * ps + buyC * pc;

  return cost <= r;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  string recipe;
  cin >> recipe;

  long long nb, ns, nc;
  cin >> nb >> ns >> nc;

  long long pb, ps, pc;
  cin >> pb >> ps >> pc;

  long long r;
  cin >> r;

  long long needB = 0, needS = 0, needC = 0;
  for (char ch : recipe) {
    if (ch == 'B')
      needB++;
    else if (ch == 'S')
      needS++;
    else if (ch == 'C')
      needC++;
  }

  long long left = 0, right = 10000000000000LL;

  while (left <= right) {
    long long mid = left + (right - left) / 2;

    if (canMake(mid, nb, ns, nc, pb, ps, pc, r, needB, needS, needC))
      left = mid + 1;
    else
      right = mid - 1;
  }

  cout << max(0LL, right) << '\n';
  return 0;
}