#include <bits/stdc++.h>
using namespace std;

int trap(vector<int> &height) {
  int n = height.size();

  vector<int> rightMax(n), leftMax(n);
  stack<int> st;

  for (int i = n - 1; i >= 0; i--) {
    while (!st.empty() && st.top() <= height[i])
      st.pop();

    if (st.empty())
      rightMax[i] = 0;

    else
      rightMax[i] = st.top();

    if (st.empty() || st.top() < height[i])
      st.push(height[i]);
  }

  while (!st.empty())
    st.pop();

  for (int i = 0; i < n; i++) {
    while (!st.empty() && st.top() <= height[i])
      st.pop();

    if (st.empty())
      leftMax[i] = 0;
    else
      leftMax[i] = st.top();

    if (st.empty() || st.top() < height[i])
      st.push(height[i]);
  }

  int ans = 0;
  for (int i = 0; i < n; i++) {
    int water = min(leftMax[i], rightMax[i]) - height[i];

    if (water > 0)
      ans += water;
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