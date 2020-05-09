#include <iostream>
#include <vector>

using namespace std;

long arrayManipulation(int n, vector<vector<int>>& queries)
{
    long res = 0, sum = 0;

    vector<long> idx(n + 1);

    for (auto& q : queries) {
        idx[q[0] - 1] += q[2];
        idx[q[1]] -= q[2];
    }

    for (auto e : idx) {
        sum += e;
        res = max(res, sum);
    }

    return res;
}

int main()
{
    int n, m;
    cin >> n >> m;

    vector<vector<int>> queries(m, vector<int>(3));
    for (auto& r : queries) {
        for (auto& c : r) {
            cin >> c;
        }
    }

    auto res = arrayManipulation(n, queries);
    cout << res << endl;

    return 0;
}
