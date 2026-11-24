#include <bits/stdc++.h>
using namespace std;

string removeDuplicateLetters(string s) {
  int n = s.size();

  vector<int> last(26, 0);
  vector<bool> visited(26, false);

  for (int i = 0; i < n; i++)
    last[s[i] - 'a'] = i;

  stack<char> st;

  for (int i = 0; i < n; i++) {
    char ch = s[i];

    if (visited[ch - 'a'])
      continue;

    while (!st.empty() && st.top() > ch && last[st.top() - 'a'] > i) {
      visited[st.top() - 'a'] = false;
      st.pop();
    }

    st.push(ch);
    visited[ch - 'a'] = true;
  }

  string ans;

  while (!st.empty()) {
    ans += st.top();
    st.pop();
  }

  reverse(ans.begin(), ans.end());
  return ans;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << "Hello, World" << endl;

  return 0;
}