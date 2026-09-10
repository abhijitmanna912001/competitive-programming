#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;

  vector<int> position(n + 1);

  for (int i = 1; i <= n; i++) {
    int x;
    cin >> x;
    position[x] = i;
  }

  int m;
  cin >> m;

  long long vasya = 0, petya = 0;
  for (int i = 1; i <= m; i++) {
    int x;
    cin >> x;
    vasya += position[x];
    petya += n - position[x] + 1;
  }

  cout << vasya << " " << petya << endl;

  return 0;
}