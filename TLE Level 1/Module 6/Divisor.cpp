#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;

  for (int i = 1; i * i <= n; i++) {
    if (n % i == 0) {
      if (i != n / i)
        cout << i << " " << n / i << endl;
      else
        cout << i << endl;
    }
  }
  //   TC = O(sqrt(N))
  //   SC = O(1)

  return 0;
}