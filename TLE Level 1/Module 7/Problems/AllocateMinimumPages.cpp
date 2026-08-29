#include <bits/stdc++.h>
using namespace std;

int countStudents(vector<int> &arr, long long pages) {
  int students = 1;
  long pagesAllocated = 0;

  for (int i = 0; i < arr.size(); i++) {
    if (pagesAllocated + arr[i] <= pages)
      pagesAllocated += arr[i];
    else {
      students++;
      pagesAllocated = arr[i];
    }
  }
  return students;
}

int findPages(vector<int> &arr, int k) {
  if (k > arr.size())
    return -1;

  long long low = arr[0], high = 0;

  for (int i = 0; i < arr.size(); i++) {
    if (arr[i] > low)
      low = arr[i];
    high += arr[i];
  }

  long long ans = -1;

  while (low <= high) {
    long long mid = low + (high - low) / 2;

    int students = countStudents(arr, mid);

    if (students <= k) {
      ans = mid;
      high = mid - 1;
    } else
      low = mid + 1;
  }
  return ans;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << "Hello, World" << endl;

  return 0;
}