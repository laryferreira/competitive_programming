#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, a;
    cin >> n;
    int soma = 0;
    int days = 0;
    for (int i = 0; i <= n; i++){
        cin >> a;
        soma += a;
        days++;
        if (soma >= 1000000) {
            break;
        }
    }
    cout << days << endl;
    return 0;
}