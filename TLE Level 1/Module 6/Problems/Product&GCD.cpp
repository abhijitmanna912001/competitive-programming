#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  long long N, P;
  cin >> N >> P;

  long long ans = 1;

  for (long long i = 2; i * i <= P; i++) {
    int count = 0;

    while (P % i == 0) {
      count++;
      P /= i;
    }

    long long exponent = count / N;
    for (long long j = 0; j < exponent; j++)
      ans *= i;
  }

  if (P > 1) {
    long long exponent = 1 / N;

    for (long long j = 0; j < exponent; j++)
      ans *= P;
  }

  cout << ans << '\n';
  return 0;
}