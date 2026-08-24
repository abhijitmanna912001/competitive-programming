#include <bits/stdc++.h>
using namespace std;

int linearSearch(vector<int> &a, int target) {
  for (int i = 0; i < a.size(); i++) {
    if (a[i] == target)
      return i;
  }
  return -1;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;
  vector<int> a(n);
  for (int &A : a)
    cin >> A;
  int target;
  cin >> target;
  int index = linearSearch(a, target);
  cout << index << '\n';

  return 0;
}