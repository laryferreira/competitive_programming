#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n;
    int a_estado = 0;
    int b_estado = 0;
    for (int i = 0; i < n; i++) {
        cin >> m;
        if (m == 1) {
            a_estado = 1 - a_estado;
        } else if (m == 2) {
            a_estado = 1 - a_estado;
            b_estado = 1 - b_estado;
        }
    }
    cout << a_estado << "\n" << b_estado << endl;
    return 0;
}