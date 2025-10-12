#include <bits/stdc++.h>
using namespace std;

bool is_prime(int x) {
    if ( x < 2) {
        return false;
    }
    for (int d = 2; d * d <= x; d++) { // quad root of x
        if (x % d == 0) {
            return false;
        }
    }
    return true;
}
int main() {
    int n, m;
    cin >> n >> m;
    if (!is_prime(m)) {
        cout << "NO" << endl;
        return 0;
    }
    for (int k = n + 1; k < m; k++) {
        if (is_prime(k)) {
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
    return 0;
}