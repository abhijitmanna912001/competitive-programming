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

        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        if (a[n - 1] == 1) {
            cout << "NO\n";
            continue;
        }

        cout << "YES\n";

        vector<int> ans(n + 1);
        int top = n;
        int i = 0;

        while (i < n) {
            int k = 0;
            while (i + k < n && a[i + k] == 1) k++;

            ans[top] = k;
            for (int j = 1; j <= k; j++)
                ans[top - j] = 0;

            top -= (k + 1);
            i += (k + 1);
        }

        for (int idx = 1; idx <= n; idx++)
            cout << ans[idx] << " \n"[idx == n];
    }
    return 0;
}