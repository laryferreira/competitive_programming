#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, resp = 0;
    cin >> n;
    while (n > 0) {
        if (n >= 100) {
            n -=100;
            ++resp;
        }
        else if (n >= 20) {
            n -=20;
            ++resp;
        }
        else if (n >= 10) {
            n -=10;
            ++resp;
        }
        else if (n >= 5) {
            n -=5;
            ++resp;
        }
        else if (n >= 1) {
            n -=1;
            ++resp;
        }
    }
    cout << resp << endl;
}