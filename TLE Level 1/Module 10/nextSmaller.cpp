#include <bits/stdc++.h>
using namespace std;

vector<int> nextSmaller(vector<int> &arr) {
  int n = arr.size();
  vector<int> ans(n);
  stack<int> st;

  for (int i = n - 1; i >= 0; i--) {
    while (!st.empty() && st.top() >= arr[i])
      st.pop();

    if (st.empty())
      ans[i] = -1;
    else
      ans[i] = st.top();
    st.push(arr[i]);
  }
  return ans;
}

// TC -> O(N)
// SC -> O(N)

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << "Hello, World" << endl;

  return 0;
}