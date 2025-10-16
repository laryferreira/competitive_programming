#include <bits/stdc++.h>
using namespace std;

int main() {
    int p,d, b;
    cin >> p >> d >> b;
    int sum = p + 2*d + 3*b;
    if (sum >= 150) {
        cout << "B" << endl;
    } else if (sum >= 120) {
        cout << "D" << endl;
    } else if (sum >= 100) {
        cout << "P" << endl;
    } else {
        cout << "N" << endl;
    }
    return 0;
}