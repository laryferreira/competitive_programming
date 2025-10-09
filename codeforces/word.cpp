#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    string aux = "";
    int uppercase_count = 0;
    int lowercase_count = 0;
    int n = s.length();

    for (int i = 0; i < n; i++) {
        if (isupper(s[i])) {
            uppercase_count++;
        }
        else if (islower(s[i])) {
            lowercase_count++;
        }
    }

    if (lowercase_count >= uppercase_count) {
        for (char c = 0; c < n; c++) {
            s[c] = tolower(s[c]);
            aux += s[c];
        }
    } else {
        for (char c = 0; c < n; c++) {
            s[c] = toupper(s[c]);
            aux += s[c];
        }
    }
    cout << aux << endl;
    return 0;
}
