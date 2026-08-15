#include <bits/stdc++.h>
using namespace std;

vector<int> factorize(int n) {
  vector<int> facts;
  for (long long d = 2; d * d <= n; d++) {
    while (n % d == 0) {
      facts.push_back(d);
      n /= d;
    }
  }

  if (n > 1)
    facts.push_back(n);
  return facts;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;
  vector<int> facts = factorize(n);
  for (int fact : facts)
    cout << fact << " ";
  cout << endl;

  //   Best TC = O(logN)
  //   Worst TC = O(sqrt(N))
  //   SC = O(1)
  return 0;
}