#include <bits/stdc++.h>
using namespace std;

int main() {
    int p, d1, d2;
    cin >> p >> d1 >> d2;
    int sum = d1 + d2;
    int vence;

    if (sum % 2 == 0) {
        vence = p;
    } else {
        vence = 1 - p;
    }

    cout << vence << endl;

    return 0;

}