#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int A, B, K;
  cin >> A >> B >> K;

  int g = gcd(A, B);

  for (int i = g; i >= 1; i--) {
    if (g % i == 0) {
      K--;

      if (K == 0) {
        cout << i << '\n';
        break;
      }
    }
  }

  return 0;
}