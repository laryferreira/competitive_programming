#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int sum = b + c + d;
    int sum2 = b + c;
    if ((a == sum) && (d == sum2) && (b == c)) {
        cout << "S" << endl;
    } else {
        cout << "N" << endl;
    }
    return 0;
}