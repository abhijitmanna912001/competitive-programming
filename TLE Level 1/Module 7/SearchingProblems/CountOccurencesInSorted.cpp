#include <bits/stdc++.h>
using namespace std;

int countFreq(vector<int> &arr, int target) {
  auto lb = lower_bound(arr.begin(), arr.end(), target);
  auto ub = upper_bound(arr.begin(), arr.end(), target);

  return ub - lb;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << "Hello, World" << endl;

  return 0;
}