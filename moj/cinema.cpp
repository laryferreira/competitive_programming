#include <bits/stdc++.h>
using namespace std;

int main() {
    int a1, a2;
    cin >> a1 >> a2;
    int paga = 0;

    if (a1 <= 17)
        paga += 15;
    else if (a1 <= 59)
        paga += 30;
    else
        paga += 20;


    if (a2 <= 17)
        paga += 15;
    else if (a2 <= 59)
        paga += 30;
    else
        paga += 20;

    cout << paga << endl;
    return 0;
}