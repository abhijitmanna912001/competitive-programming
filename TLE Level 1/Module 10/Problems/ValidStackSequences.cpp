#include <bits/stdc++.h>
using namespace std;

bool validateStackSequences(vector<int> &pushed, vector<int> &popped) {
  stack<int> st;

  int j = 0;
  for (int i = 0; i < pushed.size(); i++) {
    st.push(pushed[i]);

    while (!st.empty() && st.top() == popped[j]) {
      st.pop();
      j++;
    }
  }
  return j == popped.size();
}

// TC -> O(N)
// SC -> O(N)

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << "Hello, World" << endl;

  return 0;
}