#include <iostream>
#include <limits>
#include <vector>

using namespace std;

int formingMagicSquare(const vector<vector<char>>& s)
{
    int res = numeric_limits<int>::max();
    const auto magicSquares = {
        "816357492", "492357816",
        "618753294", "294753618",
        "834159672", "672159834",
        "438951276", "276951438"
    };

    for (auto& m : magicSquares) {
        int diff = 0;

        for (int i = 0; i < s.size(); i++) {
            for (int j = 0; j < s[i].size(); j++) {
                diff += abs(s[i][j] - m[j + i * 3]);
            }
        }

        res = min(res, diff);
    }

    return res;
}

int main()
{
    vector<vector<char>> s(3, vector<char>(3));
    for (auto& r : s) {
        for (auto& c : r) {
            cin >> c;
        }
    }

    auto res = formingMagicSquare(s);

    cout << res << endl;

    return 0;
}
