#include <bits/stdc++.h>
using namespace std;
int main() {
    int x;
    if (!(cin >> x)) return 0; //if has no entry
    int steps = x / 5 + (x % 5 != 0);
    cout << steps << '\n';
    return 0;
}
