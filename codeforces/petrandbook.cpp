#include <bits/stdc++.h>
using namespace std;

int main() {
    int p;
    cin >> p;

    vector<int> pages(7);
    for (int i = 0; i < 7; i++) {
        cin >> pages[i];
    }

    int day = 0;

    while (p > 0) {
        p -= pages[day];
        if (p <= 0){
            break;
        }
        day = (day + 1) % 7;
    }
    cout << day + 1 << endl;
    return 0;
}