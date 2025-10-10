#include <bits/stdc++.h>
using namespace std;

void to_lower(string &s) { // for reference
    transform(s.begin(), s.end(), s.begin(), ::tolower);
}
int main() {
    string s1, s2;
    cin >> s1 >> s2;

    to_lower(s1);
    to_lower(s2 );

    if (s1 < s2) {
        cout << -1 << endl;
    } else if (s1 > s2) {
        cout << 1 << endl;
    } else {
        cout << 0 << endl;
    }

    return 0;

}