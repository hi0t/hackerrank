#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <numeric>
#include <vector>
using namespace std;

int main()
{
    int cnt;
    cin >> cnt;

    vector<int> nums(cnt);
    for (auto& e : nums) {
        cin >> e;
    }

    sort(nums.begin(), nums.end());

    double sum = accumulate(nums.begin(), nums.end(), 0);
    cout << sum / cnt << endl;

    if (cnt % 2 == 0) {
        cout << (nums[cnt / 2] + nums[cnt / 2 - 1]) / 2.0 << endl;
    } else {
        cout << nums[cnt / 2 - 1] << endl;
    }

    int freq = 0, curr = nums[0], maxFreq = 0, mode = nums[0];
    for (int i = 1; i < nums.size(); i++) {
        if (curr == nums[i]) {
            freq++;
        } else {
            freq = 0;
            curr = nums[i];
        }
        if (freq > maxFreq) {
            mode = nums[i];
            maxFreq = freq;
        }
    }
    cout << mode << endl;

    return 0;
}
