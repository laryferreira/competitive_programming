#include <bits/stdc++.h>
using namespace std;

int main() {
    int k, n, w;
    cin >> k >> n >> w;
    int bananas = k * w * (w + 1)/2;
    int pay = bananas - n;

    if (pay < 0){
        pay = 0;
    }
    cout << pay << endl;
    return 0;
}