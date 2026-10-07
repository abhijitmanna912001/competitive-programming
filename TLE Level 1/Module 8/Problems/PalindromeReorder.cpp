#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  string s;
  cin >> s;

  vector<int> freq(26, 0);

  for (char c : s)
    freq[c - 'A']++;

  int oddCount = 0, oddIdx = -1;
  for (int i = 0; i < 26; i++) {
    if (freq[i] % 2 != 0) {
      oddCount++;
      oddIdx = i;
    }
  }

  if (oddCount > 1) {
    cout << "NO SOLUTION" << endl;
    return 0;
  }

  string left;
  for (int i = 0; i < 26; i++)
    left += string(freq[i] / 2, char('A' + i));

  string right = left;
  reverse(right.begin(), right.end());

  string middle = "";
  if (oddIdx != -1)
    middle = string(1, char('A' + oddIdx));

  cout << left + middle + right << endl;
  return 0;
}