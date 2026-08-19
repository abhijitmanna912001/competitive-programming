#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int A, B;
  cin >> A >> B;

  for (int d = B / 2; d >= 1; d--) {
    if (B / d - (A - 1) / d >= 2) {
      cout << d << '\n';
      return 0;
    }
  }

  return 0;
}