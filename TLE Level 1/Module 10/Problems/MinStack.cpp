#include <bits/stdc++.h>
using namespace std;

class MinStack {
public:
  stack<int> st;
  stack<int> minSt;

  MinStack() {}

  void push(int value) {
    st.push(value);

    if (minSt.empty() || value <= minSt.top())
      minSt.push(value);
  }

  void pop() {
    if (st.top() == minSt.top())
      minSt.pop();

    st.pop();
  }

  int top() { return st.top(); }

  int getMin() { return minSt.top(); }

  // TC -> O(1)
  // SC -> O(N)
};

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << "Hello, World" << endl;

  return 0;
}