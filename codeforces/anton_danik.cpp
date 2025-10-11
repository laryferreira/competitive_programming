#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    string s;
    int awin = 0;
    int dwin = 0;
    int ls = s.length();
    cin >> n >> s;

    for (int i = 0; i < ls; i++) {
        if (s[i] == 'D') {
            awin++;
        } else if (s[i] == 'A') {
            dwin++;
        }
    }

    if (awin > dwin) {
        cout << "Anton" << endl;
    } else if (dwin < awin) {
        cout << "Anton" << endl;
    } else {
        cout << "Friendship" << endl;
    }

    return 0;
}