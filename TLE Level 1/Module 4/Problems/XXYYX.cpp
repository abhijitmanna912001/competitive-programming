#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int N, A, B, C, D;
  cin >> N >> A >> B >> C >> D;

  if (abs(B - C) > 1)
    cout << "No";
  else if (B == 0 && C == 0 && A > 0 && D > 0)
    cout << "No";
  else
    cout << "Yes";
  return 0;
}