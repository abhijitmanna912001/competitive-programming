#include <bits/stdc++.h>
using namespace std;

int expandAroundCenter(string &s, int left, int right) {
  int n = s.size();

  while (left >= 0 && right < n && s[left] == s[right]) {
    left--;
    right++;
  }
  return right - left - 1;
}

string longestPalindrome(string s) {
  int n = s.size();
  int start = 0, maxLen = 1;

  for (int i = 0; i < n; i++) {
    // Odd length palindrome
    int len1 = expandAroundCenter(s, i, i);

    if (len1 > maxLen) {
      maxLen = len1;
      start = i - (len1 - 1) / 2;
    }

    // Even length palindrome
    int len2 = expandAroundCenter(s, i, i + 1);

    if (len2 > maxLen) {
      maxLen = len2;
      start = i - (len2 / 2) + 1;
    }
  }
  return s.substr(start, maxLen);
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  string s;
  cin >> s;
  cout << longestPalindrome(s) << '\n';

  return 0;
}