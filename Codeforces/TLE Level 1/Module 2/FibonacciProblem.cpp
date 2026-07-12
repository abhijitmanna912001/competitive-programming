#include <bits/stdc++.h>
using namespace std;

// fibo(1) = 0
// fibo(2) = 1
// fibo(n) = fibo(n - 1) + fibo(n - 2)

// N(1 <= N <= 50)

int main() {
    int N;
    cin >> N;

    long long a = 0, b = 1;

    if (N == 1) {
        cout << a << "\n";
        return 0;
    }

    if (N == 2) {
        cout << b << "\n";
        return 0;
    }

    for (int i = 3; i <= N; i++) {
        long long c = a + b;
        a = b;
        b = c;
    }

    cout << b << "\n";

    return 0;
}