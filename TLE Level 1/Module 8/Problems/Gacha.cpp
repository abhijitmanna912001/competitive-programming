#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int N;
  cin >> N;

  set<string> s;

  for (int i = 0; i < N; i++) {
    string S;
    cin >> S;
    s.insert(S);
  }

  cout << s.size() << '\n';

  return 0;
}