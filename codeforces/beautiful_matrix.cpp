#include <bits/stdc++.h>
using namespace std;

int main() {
    int x, y; //number position
    for (int k = 1; k <= 5; ++k) {
        for (int j = 1; j <= 5; ++j) {
            int num;
            cin >> num;
            if (num == 1) {
                x = k;
                y = j;
            }
        }
    }

    cout << abs(x - 3) + abs(y - 3) << endl; // distance from 3,3
    return 0;
}