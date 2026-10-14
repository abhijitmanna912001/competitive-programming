#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;

  vector<long long> a(n);

  for (int i = 0; i < n; i++)
    cin >> a[i];

  map<long long, int> lastSeen;

  int left = 0, maxLength = 0;

  for (int i = 0; i < n; i++) {
    if (lastSeen.find(a[i]) != lastSeen.end() && lastSeen[a[i]] >= left)
      left = lastSeen[a[i]] + 1;

    lastSeen[a[i]] = i;
    int length = i - left + 1;
    maxLength = max(maxLength, length);
  }

  cout << maxLength << endl;

  return 0;
}