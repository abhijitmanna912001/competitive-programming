#include <bits/stdc++.h>
using namespace std;

int largestRectangleArea(vector<int> &heights) {
  int n = heights.size();

  vector<int> next(n), prev(n);
  stack<int> st;

  for (int i = n - 1; i >= 0; i--) {
    while (!st.empty() && heights[st.top()] >= heights[i])
      st.pop();

    next[i] = st.empty() ? n : st.top();
    st.push(i);
  }

  while (!st.empty())
    st.pop();

  for (int i = 0; i < n; i++) {
    while (!st.empty() && heights[st.top()] >= heights[i])
      st.pop();

    prev[i] = st.empty() ? -1 : st.top();
    st.push(i);
  }

  int maxArea = 0;
  for (int i = 0; i < n; i++) {
    int width = next[i] - prev[i] - 1;
    int area = heights[i] * width;
    maxArea = max(maxArea, area);
  }
  return maxArea;
}

// TC: O(n)
// SC: O(n)

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << "Hello, World" << endl;

  return 0;
}