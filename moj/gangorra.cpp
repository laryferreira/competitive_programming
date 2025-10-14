#include <bits/stdc++.h>
using namespace std;

int main() {
    int p, c1, p2, c2;
    cin >> p >> c1 >> p2 >> c2;
    int eq1 = p * c1;
    int eq2 = p2 * c2;
    if (eq1 == eq2) {
        cout << "0" << endl;
    } else if (eq1 > eq2) {
        cout << "-1" << endl;
    } else if (eq2 > eq1) {
        cout << "1" << endl;
    }
    return 0;
}