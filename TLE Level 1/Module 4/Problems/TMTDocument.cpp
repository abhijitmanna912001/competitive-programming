#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;

    string s;
    cin >> s;

    int T = 0, M = 0;
    for (char c : s) {
      if (c == 'T')
        T++;
      else
        M++;
    }

    if (T != 2 * M) {
      cout << "NO\n";
      continue;
    }

    bool ok = true;
    int tCnt = 0, mCnt = 0;

    for (char c : s) {
      if (c == 'T')
        tCnt++;
      else
        mCnt++;

      if (mCnt > tCnt) {
        ok = false;
        break;
      }
    }

    if (!ok) {
      cout << "NO\n";
      continue;
    }

    tCnt = 0;
    mCnt = 0;

    for (int i = n - 1; i >= 0; i--) {
      if (s[i] == 'T')
        tCnt++;
      else
        mCnt++;

      if (mCnt > tCnt) {
        ok = false;
        break;
      }
    }

    if (!ok) {
      cout << "NO\n";
      continue;
    }

    cout << "YES\n";
  }
  return 0;
};