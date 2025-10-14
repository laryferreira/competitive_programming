#include <bits/stdc++.h>
using namespace std;

int main() {
    string g, h, l;
    cin >> g >> h >> l;
    string comb = g + h;

    int count[26] = {};

    for (char c : comb) {
        count[c - 'A']++;
    }
    for (char c : l) {
        count[c - 'A']--;
    }

    bool possible = true;

    for (int i = 0; i < 26; i++) {
        if (count[i] != 0) {
            possible = false;
            break;
        }
    }
    cout << (possible ? "YES" : "NO") << endl;
    return 0;
}