#include <bits/stdc++.h>
using namespace std;

int main() {
    int x, n;
    cin >> x >> n;
    int total = x * (n+1);
    for (int i = 0; i < n; i++) {
        int m;
        cin >> m;
        total -= m;
    }
    cout << total << endl;
    return 0;
}