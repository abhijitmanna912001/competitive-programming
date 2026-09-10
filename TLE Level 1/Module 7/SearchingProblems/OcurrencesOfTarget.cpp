/*
Problem:
Given a sorted array of integers, print the occurences of a given number X.

e.g a[] = [1, 2, 4, 4, 4, 5, 5, 6, 10], X = 4
Answer = 3
*/

#include <bits/stdc++.h>
using namespace std;

int lowerBound(const vector<int> &a, int target) {
  int low = 0, high = a.size() - 1, result = -1;

  while (low <= high) {
    int mid = low + (high - low) / 2;

    if (a[mid] == target) {
      result = mid;
      high = mid - 1;
    } else if (a[mid] < target)
      low = mid + 1;
    else
      high = mid - 1;
  }
  return result;
}

int upperBound(const vector<int> &a, int target) {
  int low = 0, high = a.size() - 1, result = -1;

  while (low <= high) {
    int mid = low + (high - low) / 2;

    if (a[mid] == target) {
      result = mid;
      low = mid + 1;
    } else if (a[mid] < target)
      low = mid + 1;
    else
      high = mid - 1;
  }
  return result;
}

int countOccurences(const vector<int> &a, int target) {
  int first = lowerBound(a, target);

  if (first == -1)
    return 0;

  int last = upperBound(a, target);
  return last - first + 1;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, target;
  cin >> n >> target;

  vector<int> a(n);
  for (int &A : a)
    cin >> A;

  cout << countOccurences(a, target) << endl;
  return 0;
}