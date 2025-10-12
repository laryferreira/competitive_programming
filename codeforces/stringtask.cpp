#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    set <char> vowels = {'a', 'e', 'i', 'o', 'u', 'y'};
    for (char c : s){
        c = tolower(c);
        if (vowels.find(c) == vowels.end()){
            cout << "." << c;
        }
    }
    cout << endl;
    return 0;
}