#include <bits/stdc++.h>
using namespace std;

bool isValid(string s) {
  stack<char> st;

  for (char curr : s) {
    if (curr == '(' || curr == '{' || curr == '[')
      st.push(curr);

    else {
      if (st.empty())
        return false;

      if (curr == ')' && st.top() == '(' || curr == '}' && st.top() == '{' ||
          curr == ']' && st.top() == '[')
        st.pop();

      else
        return false;
    }
  }
  return st.empty();
}

// TC -> O(N)
// SC -> O(N)

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << "Hello, World" << endl;

  return 0;
}