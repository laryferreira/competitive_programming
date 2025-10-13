#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    string t;
    cin >> s;
    reverse(s.begin(), s.end());
    cin >> t;
    if (s == t) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}