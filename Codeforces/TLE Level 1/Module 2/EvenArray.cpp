#include <bits/stdc++.h>
using namespace std;

// arr -> good -> arr[i] % 2 == i % 2
// index: 0 1 2 3 4 5
// Need:  E O E O E O

// arr[0, 5, 2, 1] -> good
// arr[0] = 0 % 2 -> 0 == 0 <- 0 % 2
// arr[1] = 1 % 2 -> 1 == 1 <- 5 % 2
// arr[2] = 2 % 2 -> 0 == 0 <- 2 % 2
// arr[3] = 3 % 2 -> 1 == 1 <- 1 % 2

// arr[4] = [3, 2, 7, 6]
// arr[0] = 0 % 2 -> 0 != 1 <- 3 % 2
// arr[1] = 1 % 2 -> 1 != 0 <- 2 % 2
// arr[2] = 2 % 2 -> 0 != 1 <- 7 % 2
// arr[3] = 3 % 2 -> 1 != 0 <- 6 % 2

// swap arr[0], arr[1] -> arr[2, 3, 7, 6]
// arr[0] = 0 % 2 -> 0 == 0 <- 2 % 2
// arr[1] = 1 % 2 -> 1 == 1 <- 3 % 2

// swap arr[2]. arr[3] -> arr[2, 3, 6, 7]
// arr[0] = 0 % 2 -> 0 == 0 <- 2 % 2
// arr[1] = 1 % 2 -> 1 == 1 <- 3 % 2
// arr[2] = 2 % 2 -> 0 == 0 <- 6 % 2
// arr[3] = 3 % 2 -> 1 == 1 <- 7 % 2

int main() {
  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
      cin >> arr[i];

    int wrongEven = 0, wrongOdd = 0;

    for (int i = 0; i < n; i++) {
      if (i % 2 == 0 && arr[i] % 2 == 1)
        wrongEven++;
      if (i % 2 == 1 && arr[i] % 2 == 0)
        wrongOdd++;
    }

    if (wrongEven != wrongOdd)
      cout << "-1\n";
    else
      cout << wrongEven << "\n";
  }
  return 0;
}