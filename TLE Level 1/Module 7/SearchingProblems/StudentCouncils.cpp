#include <bits/stdc++.h>
using namespace std;

bool check(const vector<long long> &a, long long mid, int k) {
  long long students = 0;

  for (int i = 0; i < a.size(); i++)
    students += min(a[i], mid);

  if (students >= mid * k)
    return true;
  else
    return false;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int k, n;
  cin >> k;
  cin >> n;

  vector<long long> a(n);
  for (int i = 0; i < n; i++)
    cin >> a[i];

  long long sum = 0;
  for (int i = 0; i < n; i++)
    sum += a[i];

  long long low = 1, high = sum / k;

  while (low <= high) {
    long long mid = low + (high - low) / 2;
    if (check(a, mid, k))
      low = mid + 1;
    else
      high = mid - 1;
  }

  cout << high << endl;
  return 0;
}