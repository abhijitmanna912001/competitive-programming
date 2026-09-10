#include <bits/stdc++.h>
using namespace std;

void countingSort(vector<int> &arr, int maxVal) {
  vector<int> count(maxVal + 1, 0);

  for (int num : arr)
    count[num]++;

  int idx = 0;
  for (int i = 0; i <= maxVal; i++) {
    while (count[i] > 0) {
      arr[idx++] = i;
      count[i]--;
    }
  }
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;

  vector<int> arr(n);
  for (int i = 0; i < n; i++)
    cin >> arr[i];

  countingSort(arr, *max_element(arr.begin(), arr.end()));

  for (int i = 0; i < n; i++)
    cout << arr[i] << " ";

  cout << endl;

  return 0;
}