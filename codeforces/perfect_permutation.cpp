#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    if (n % 2 !=0) {
        cout << -1 << '\n';
        return 0;
    }
    for (int i = 1; i <= n; i+= 2) {
        cout << (i + 1) << ' ' << i;
        if (i + 2 <= n)
            cout << ' ';
    }
    cout << '\n';
    return 0;

}