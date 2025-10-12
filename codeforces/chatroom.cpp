#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    string target = "hello";
    int i = 0;

    for (char c : s) {
        if (c == target[i]) {
            i++;
            if (i == target.size()) break;
        }
    }
    cout << (i == target.size() ? "YES" : "NO") << endl;
    return 0;
}