#include <bits/stdc++.h>
using namespace std;

bool distinct_digits(int y) {
    set<int> ds;
    int aux = y;
    for (int i = 0; i < 4; i++) {
        int d = aux % 10;

        if (ds.count(d)) {
            return false;
        }
        ds.insert(d);

        aux /= 10;
    }
    return true;
}
void process() {
    int y;
    cin >> y;
    int current_y = y + 1;

    while (true) {
        if (distinct_digits(current_y)) {
            cout << current_y << endl;
            break;
        }
        current_y++;
    }

}
int main() {
    process();
    return 0;
}