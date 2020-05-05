#include <bits/stdc++.h>

using namespace std;

string ltrim(const string&);
string rtrim(const string&);

int maxPairs(vector<int> skillLevel, int minDiff)
{
    int res = 0;
    sort(skillLevel.begin(), skillLevel.end());
    int l = 0, r = skillLevel.size() - 1;

    while (l < r) {
        if (skillLevel[l] + minDiff <= skillLevel[r]) {
            r--;
            res++;
        }
        l++;
    }

    return res;
}

int main()
{
    int cnt, minDiff;

    cin >> cnt;
    vector<int> skillLevel(cnt);
    for (auto& e : skillLevel) {
        cin >> e;
    }

    cin >> minDiff;

    auto res = maxPairs(skillLevel, minDiff);

    cout << res << endl;

    return 0;
}
