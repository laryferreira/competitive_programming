#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, t, p, m;
    cin >> n;
    int m_check = 0;
    int p_check = 0;
    for (int i = 0; i < n; i++){
        cin >> t;
        if (t == 1){
            p_check +=1;
        } else {
            m_check +=1;
        }
    }
    cin >> p >> m;
    if (p_check == p && m_check == m) {
        cout << "S" << endl;
    } else {
        cout << "N" << endl;
    }
    return 0;
}