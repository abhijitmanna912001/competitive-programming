#include <bits/stdc++.h>
using namespace std;

int longestValidParentheses(string s) {
  stack<int> st;
  st.push(-1);
  int maxi = 0;

  for (int i = 0; i < s.size(); i++) {
    if (s[i] == '(')
      st.push(i);
    else {
      st.pop();
      if (st.empty())
        st.push(i);
      else
        maxi = max(maxi, i - st.top());
    }
  }
  return maxi;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << "Hello, World" << endl;

  return 0;
}