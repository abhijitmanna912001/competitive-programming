#include <bits/stdc++.h>
using namespace std;

// 2 <= N <= 100
// 1 <= Ai <= 100
// Ai != Ai+1
// All inputs -> integers

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int N;
  cin >> N;

  vector<int> A(N);
  for (int &num : A)
    cin >> num;

  for (int i = 0; i < N - 1; i++) {
    if (A[i] < A[i + 1])
      for (int x = A[i]; x < A[i + 1]; x++)
        cout << x << " ";
    else
      for (int x = A[i]; x > A[i + 1]; x--)
        cout << x << " ";
  }

  cout << A[N - 1] << "\n";
  return 0;
}