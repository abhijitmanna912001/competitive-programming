#include <bits/stdc++.h>
using namespace std;

void selectionSort(vector<int> &arr) {
  int n = arr.size();

  for (int i = 0; i < n - 1; i++) {
    int minIdx = i;

    for (int j = i + 1; j < n; j++) {
      if (arr[j] < arr[minIdx])
        minIdx = j;
    }

    if (minIdx != i)
      swap(arr[i], arr[minIdx]);
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

  selectionSort(arr);

  for (int i = 0; i < n; i++)
    cout << arr[i] << " ";

  cout << endl;
  return 0;
}