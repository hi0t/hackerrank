#include <algorithm>
#include <iostream>
#include <unordered_map>

using namespace std;

int sherlockAndAnagrams(const string& s)
{
    int res = 0;
    for (int i = 1; i < s.size(); i++) {
        unordered_map<string, int> idx;
        for (int j = 0; j < (s.size() - i + 1); j++) {
            string sub = s.substr(j, i);
            sort(sub.begin(), sub.end());
            idx[sub]++;
        }
        for (auto it = idx.begin(); it != idx.end(); ++it) {
            if (it->second > 1) {
                res += (it->second * (it->second - 1) / 2);
            }
        }
    }
    return res;
}

int main()
{
    int q;
    cin >> q;

    for (int i = 0; i < q; i++) {
        string s;
        cin >> s;
        auto res = sherlockAndAnagrams(s);
        cout << res << endl;
    }

    return 0;
}
