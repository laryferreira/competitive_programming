#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c, h, l;
    cin >> a >> b >> c >> h >> l;
    if ((a <= h && b <= l) || (a <= l && b <= h) ||(a <= h && c <= l) || (a <= l && c <= h) || (b <= h && c <= l) || (c <= h && b <= l)) {
        cout << "S" << endl;
    } else {
        cout << "N" << endl;
    }
    return 0;
}