#include <bits/stdc++.h>
using namespace std;

vector<int> runningSum(vector<int>& nums) {
    vector<int> results(nums.size());
    results[0] = nums[0];

    for (int i = 1; i < nums.size(); i++) {
        results[i] = nums[i] + results[i - 1];
    }

    return results;
}

int main() {
    vector<int> nums = {3, 1, 2, 10, 1};
    vector<int> result = runningSum(nums);

    for (int x : result) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
// g++ 1480.cpp -o 1480 -std=c++11