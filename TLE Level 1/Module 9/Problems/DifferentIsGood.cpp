#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;

  string s;
  cin >> s;

  if (n > 26) {
    cout << -1 << '\n';
    return 0;
  }

  unordered_set<char> st;
  for (char c : s)
    st.insert(c);

  int distinctCount = st.size();

  cout << n - distinctCount << '\n';
  return 0;
}