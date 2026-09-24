#include <bits/stdc++.h>
using namespace std;

const int MAXN = 30000;
vector<int> prims;

void precompute() {
  vector<bool> isPrime(MAXN + 1, true);

  isPrime[0] = isPrime[1] = false;

  for (int i = 2; i * i <= MAXN; i++) {
    if (isPrime[i]) {
      for (int j = i * i; j <= MAXN; j += i)
        isPrime[j] = false;
    }
  }

  for (int i = 2; i <= MAXN; i++) {
    if (isPrime[i])
      prims.push_back(i);
  }
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  precompute();

  int t;
  cin >> t;

  while (t--) {
    int d;
    cin >> d;

    int p = *lower_bound(prims.begin(), prims.end(), d + 1);
    int q = *lower_bound(prims.begin(), prims.end(), p + d);

    long long ans = 1LL * p * q;
    cout << ans << '\n';
  }

  return 0;
}