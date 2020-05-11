#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

vector<int> climbingLeaderboard(vector<int> scores, vector<int> alice)
{
    vector<int> res;

    auto it = scores.begin();
    it++;
    while (it != scores.end()) {
        auto last = next(it, -1);
        if (*last == *it) {
            it = scores.erase(it);
        } else {
            it++;
        }
    }

    for (auto e : alice) {
        auto it = lower_bound(scores.begin(), scores.end(), e, greater<int>());
        res.push_back(distance(scores.begin(), it) + 1);
    }

    return res;
}

int main()
{
    int n;

    cin >> n;
    vector<int> scores(n);
    for (auto& e : scores) {
        cin >> e;
    }

    cin >> n;
    vector<int> alice(n);
    for (auto& e : alice) {
        cin >> e;
    }

    auto res = climbingLeaderboard(scores, alice);
    for (auto& e : res) {
        cout << e << endl;
    }

    return 0;
}
