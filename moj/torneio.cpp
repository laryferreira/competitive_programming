#include <bits/stdc++.h>
using namespace std;

int main() {
    char r;
    int g = 0;
    for (int i = 0; i < 6; i++) {
        cin >> r;
        if (r == 'V') {
            g+=1;
        }
    } if (g == 5 || g == 6) {
        cout << 1 << "\n";
    } else if (g == 3 || g == 4) {
        cout << 2 << "\n";
    } else if (g == 1 || g == 2) {
        cout << 3 << "\n";
    } else {
        cout << -1 << "\n";
    }
    return 0;
}
