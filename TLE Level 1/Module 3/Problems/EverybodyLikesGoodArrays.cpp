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

    vector<int> arr(n);
    for (int &it : arr)
      cin >> it;

    int k = 0, totalOps = 0;
    for (int i = 0; i < n; i++) {
      if (i == 0 || (arr[i - 1] % 2 == arr[i] % 2))
        k++;
      else {
        totalOps += k - 1;
        k = 1;
      }
    }

    totalOps += k - 1;
    cout << totalOps << endl;
  }

  return 0;
}