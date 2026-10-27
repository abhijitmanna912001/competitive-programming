#include <bits/stdc++.h>
using namespace std;

string frequencySort(string s) {
  unordered_map<char, int> freq;

  for (char c : s)
    freq[c]++;

  sort(s.begin(), s.end(), [&](char a, char b) {
    if (freq[a] != freq[b])
      return freq[a] > freq[b];

    return a < b;
  });

  return s;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;

  while (t--) {
    string s;
    cin >> s;

    cout << frequencySort(s) << "\n";
  }

  return 0;
}