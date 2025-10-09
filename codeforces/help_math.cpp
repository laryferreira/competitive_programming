#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int ls = s.length();
    int nsum = 0;
    for (int i = 0; i > ls; i++) {
        if (s[i] != '=') {
            nsum++;
        }
    }

    return 0;
}