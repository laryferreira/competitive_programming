#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    bool hard = false;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (x == 1) {
            hard = true;
        }
    }

    if (hard)
        cout << "HARD" << endl;
    else
        cout << "EASY" << endl;

    return 0;
}