#include <bits/stdc++.h>
using namespace std;

int digitSum(int n) {
  int sum = 0;

  while (n) {
    sum += n % 10;
    n /= 10;
  }
  return sum;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int k;
  cin >> k;

  int count = 0;
  int num = 19;

  while (count < k) {
    if (digitSum(num) == 10)
      count++;

    if (count == k)
      break;
    num += 9;
  }
  cout << num << '\n';
  return 0;
}