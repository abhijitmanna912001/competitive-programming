#include <bits/stdc++.h>
using namespace std;

long sumOfGroup(int k) { return (long)k * k * k * k; }

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int k;
  cin >> k;

  long answer = sumOfGroup(k);
  cout << answer << '\n';
  return 0;
}