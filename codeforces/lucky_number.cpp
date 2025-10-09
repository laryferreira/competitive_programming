#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int ls = s.length();
    int seven_count = 0;
    int four_count = 0;
    for (int i = 0; i < ls; i++) {
        if (s[i] == '7') {
            seven_count++;
        }
        else if (s[i] == '4') {
            four_count++;
        }
    }
    int lucky_number = seven_count + four_count;
    if (lucky_number == 7 || lucky_number == 4) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}