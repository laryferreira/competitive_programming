#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cin >> s;
    string decoded = "";
    int n = s.length();

    for (int i = 0; i < n;) {
        if (s[i] == '.') {
            decoded += '0';
            i += 1;
        }
        else if (s[i] == '-') {
            if (i + 1 < n) {
                if (s[i+1] == '.') {
                    decoded += '1';
                } else if (s[i+1] == '-') {
                    decoded += '2';
                }
            } i += 2;
        }
    }
    cout << decoded << endl;
}