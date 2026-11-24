#include <bits/stdc++.h>
using namespace std;

int evalRPN(vector<string> &tokens) {
  stack<int> st;

  for (auto &token : tokens) {
    if (token == "+" || token == "-" || token == "*" || token == "/") {
      int b = st.top();
      st.pop();

      int a = st.top();
      st.pop();

      int result;

      if (token == "+")
        result = a + b;
      else if (token == "-")
        result = a - b;
      else if (token == "*")
        result = a * b;
      else
        result = a / b;

      st.push(result);
    } else
      st.push(stoi(token));
  }
  return st.top();
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << "Hello, World" << endl;

  return 0;
}