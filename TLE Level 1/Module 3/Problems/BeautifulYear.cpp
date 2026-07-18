#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int y;
  cin >> y;

  int year = y + 1;

  while (true) {
    int temp = year;

    int d1 = temp % 10;
    temp /= 10;

    int d2 = temp % 10;
    temp /= 10;

    int d3 = temp % 10;
    temp /= 10;

    int d4 = temp % 10;

    if (d1 != d2 && d1 != d3 && d1 != d4 && d2 != d3 && d2 != d4 && d3 != d4) {
      cout << year << endl;
      break;
    }

    else
      year++;
  }
  return 0;
}