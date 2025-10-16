#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, r, p;
    cin >> n >> r >> p;

    int d = 0;
    int total = n;
    int infectados_dia = n;

    while (total < p) {
        infectados_dia*=r;
        total += infectados_dia;
        d++;
    }
    cout << d << endl;
    return 0;
}