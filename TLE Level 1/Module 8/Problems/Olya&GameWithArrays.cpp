#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;

    long long globalMin = LLONG_MAX;
    long long sumSecondMin = 0;
    long long smallestSecondMin = LLONG_MAX;

    for (int i = 0; i < n; i++) {
      int mi;
      cin >> mi;

      long long min1 = LLONG_MAX;
      long long min2 = LLONG_MAX;

      for (int j = 0; j < mi; j++) {
        long long a;
        cin >> a;

        if (a < min1) {
          min2 = min1;
          min1 = a;
        } else if (a < min2)
          min2 = a;
      }

      globalMin = min(globalMin, min1);
      sumSecondMin += min2;
      smallestSecondMin = min(smallestSecondMin, min2);
    }

    cout << sumSecondMin - smallestSecondMin + globalMin << '\n';
  }

  return 0;
}