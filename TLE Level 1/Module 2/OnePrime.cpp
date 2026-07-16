#include <bits/stdc++.h>
#include <ostream>
using namespace std;

int main() {
  int X;
  cin >> X;

  bool isPrime = false;

  if (X <= 1)
    return isPrime;

  for (int i = 2; i < X; i++)
    if (X % i == 0)
      isPrime = true;

  if (isPrime)
    cout << "NO" << endl;
  else
    cout << "YES" << endl;
  return 0;
}