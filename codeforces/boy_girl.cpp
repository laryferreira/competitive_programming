#include <bits/stdc++.h>
using namespace std;

int main() {
    string username;
    cin >> username;
    int ls = username.length();
    int distinct_chars = 0;
    bool seen[26] = {false};
    for (int i = 0; i < ls; i++) {
        char c = username[i];
        int index = c - 'a';
        if (!seen[index]) {
            seen[index] = true;
            distinct_chars++;
        }
    }
    if (distinct_chars % 2 == 0) {
        cout << "CHAT WITH HER!" << endl;
    } else {
        cout << "IGNORE HIM!" << endl;
    }
    return 0;
}