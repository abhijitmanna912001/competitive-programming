#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

// 5 1 1 9 3
// sort -> 1 1 3 5 9

// 1 9 1 5 3
// sort -> 1 1 3 5 9

int main() {
  int N;
  cin >> N;

  int arrA[N], arrB[N];
  for (int i = 0; i < N; i++)
    cin >> arrA[i];

  for (int i = 0; i < N; i++)
    cin >> arrB[i];

  sort(arrA, arrA + N);
  sort(arrB, arrB + N);

  for (int i = 0; i < N; i++) {
    if (arrA[i] != arrB[i]) {
      cout << "no";
      return 0;
    }
  }
  cout << "yes";
  return 0;
}