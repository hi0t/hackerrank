#include <algorithm>
#include <iostream>
#include <numeric>
#include <vector>
using namespace std;

int solution(vector<vector<int>>& arr)
{
    int res = numeric_limits<int>::min();
    int sum;

    for (size_t i = 0; i < arr.size() - 2; i++) {
        for (size_t j = 0; j < arr[i].size() - 2; j++) {
            sum = arr[i][j] + arr[i][j + 1] + arr[i][j + 2];
            sum += arr[i + 1][j + 1];
            sum += arr[i + 2][j] + arr[i + 2][j + 1] + arr[i + 2][j + 2];

            res = max(sum, res);
        }
    }

    return res;
}

int main()
{
    vector<vector<int>> arr(6, vector<int>(6));
    for (auto& r : arr) {
        for (auto& c : r) {
            cin >> c;
        }
    }

    auto res = solution(arr);
    cout << res << endl;

    return 0;
}
