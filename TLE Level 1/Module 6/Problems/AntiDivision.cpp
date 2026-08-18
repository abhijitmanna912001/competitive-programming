#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  long long A, B, C, D;
  cin >> A >> B >> C >> D;

  long long lcm = C * D / gcd(C, D);
  long long total = B - A + 1;

  long long multiplesOfC = B / C - (A - 1) / C;
  long long multiplesOfD = B / D - (A - 1) / D;
  long long multiplesOfLcm = B / lcm - (A - 1) / lcm;

  long long count = total - multiplesOfC - multiplesOfD + multiplesOfLcm;

  cout << count << endl;

  return 0;
}