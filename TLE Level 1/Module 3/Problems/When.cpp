#include <bits/stdc++.h>
using namespace std;

// setw(2) → print the next number using at least 2 characters.
// setfill('0') → if fewer than 2 characters are needed, pad with 0 on the left.

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int k;
  cin >> k;

  int hours = 21;

  int kHour = k / 60;
  int kMin = k % 60;

  cout << setfill('0') << setw(2) << hours + kHour << ":" << setw(2) << kMin
       << "\n";
  return 0;
}