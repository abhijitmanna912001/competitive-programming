#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int A, B, C, D, E;
  cin >> A >> B >> C >> D >> E;

  int count[14];
  for (int i = 1; i <= 13; i++)
    count[i] = 0;

  count[A]++;
  count[B]++;
  count[C]++;
  count[D]++;
  count[E]++;

  int two = 0, three = 0;
  for (int i = 1; i <= 13; i++) {
    if (count[i] == 2)
      two++;
    if (count[i] == 3)
      three++;
  }

  if (two == 1 && three == 1)
    cout << "Yes\n";
  else
    cout << "No\n";
  return 0;
}