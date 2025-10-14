#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, p;
    cin >> n >> p;

    long long bact = 1;
    int d = 0;

    while (bact * p <= n){
        bact *= p;
        d++;
    }
    cout << d << endl;
    return 0;
}