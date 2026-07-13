#include <bits/stdc++.h>
using namespace std;

// 1
// 2 3
// 6 5 4
// 7 8 9 10
// 15 14 13 12 11
// 16 17 18 19 20 21

int main() {
  int n;
  cin >> n;

  int count = 1;

  for (int row = 1; row <= n; row++) {
    int arr[100];

    for (int i = 0; i < row; i++) {
      arr[i] = count;
      count++;
    }

    if (row % 2 == 1 && row != 1)
      reverse(arr, arr + row);

    for (int i = 0; i < row; i++)
      cout << arr[i] << " ";

    cout << "\n";
  }

  return 0;
}