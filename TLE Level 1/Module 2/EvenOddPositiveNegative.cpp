#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;

  int arr[N];
  for (int i = 0; i < N; i++)
    cin >> arr[i];

  int evenNos = 0, oddNos = 0, noOfPositive = 0, noOfNegative = 0;
  for (int i = 0; i < N; i++) {
    if (arr[i] % 2 == 0)
      evenNos++;
    else
      oddNos++;
  }

  for (int i = 0; i < N; i++) {
    if (arr[i] > 0)
      noOfPositive++;
    else if (arr[i] < 0)
      noOfNegative++;
  }

  cout << "Even: " << evenNos << endl;
  cout << "Odd: " << oddNos << endl;
  cout << "Positive: " << noOfPositive << endl;
  cout << "Negative: " << noOfNegative << endl;
  return 0;
}