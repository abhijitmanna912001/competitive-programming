#include <bits/stdc++.h>
using namespace std;

bool hasZero(const vector<long long> &A) {
  for (long long a : A) {
    if (a == 0)
      return true;
  }
  return false;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  long long N;
  cin >> N;

  vector<long long> A(N);
  for (int i = 0; i < N; i++)
    cin >> A[i];

  long long product = 1;
  long long M = 1000000000000000000LL;

  if (hasZero(A)) {
    cout << 0 << '\n';
    return 0;
  }

  for (long long a : A) {
    if (product > M / a) {
      cout << -1 << '\n';
      return 0;
    }
    product *= a;
  }

  cout << product << '\n';
  return 0;
}