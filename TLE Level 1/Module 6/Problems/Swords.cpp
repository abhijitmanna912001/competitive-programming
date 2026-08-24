#include <bits/stdc++.h>
using namespace std;

long long GCD(long long a, long long b) {
  while (b != 0) {
    long long temp = a % b;
    a = b;
    b = temp;
  }
  return a;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;

  vector<long long> a(n);
  for (long long &A : a)
    cin >> A;

  long long mx = *max_element(a.begin(), a.end());
  long long g = 0;

  for (long long x : a)
    g = GCD(g, mx - x);

  long long y = 0;
  for (long long x : a)
    y += (mx - x) / g;

  cout << y << ' ' << g << '\n';
  return 0;
}

// TC -> O(n log A) 
// SC -> O(n)