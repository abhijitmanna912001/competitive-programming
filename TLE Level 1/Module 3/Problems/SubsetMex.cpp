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

    int cnt[101] = {};

    for (int i = 0; i < n; i++) {
      int x;
      cin >> x;
      cnt[x]++;
    }

    int mexA = 0;
    while (cnt[mexA] > 0)
      mexA++;

    int mexB = 0;
    while (cnt[mexB] > 1)
      mexB++;

    cout << mexA + mexB << '\n';
  }
  return 0;
}