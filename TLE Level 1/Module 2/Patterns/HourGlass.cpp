#include <bits/stdc++.h>
using namespace std;

// 0 *******
// 1 #*****
// 2 ##***
// 3 ###*
// 4 ##***
// 5 #*****
// 6 *******

int main() {
    int rows;
    cin >> rows;

    // Upper half (including the middle row)
    for (int i = rows - 1; i >= 0; i--) {
        for (int j = 0; j < rows - i - 1; j++)
            cout << " ";

        for (int k = 0; k < 2 * i + 1; k++)
            cout << "*";

        cout << "\n";
    }

    // Lower half (excluding the middle row)
    for (int i = 1; i < rows; i++) {
        for (int j = 0; j < rows - i - 1; j++)
            cout << " ";

        for (int k = 0; k < 2 * i + 1; k++)
            cout << "*";

        cout << "\n";
    }

    return 0;
}