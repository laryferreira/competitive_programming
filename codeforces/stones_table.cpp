#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int l_s = s.length();
    int aux = 0;
    for (int i = 1; i < l_s; i++) {
        if (s[i] == s[i-1]) {
            aux++;
        }
    }
    cout << aux << endl;
    return 0;
}
