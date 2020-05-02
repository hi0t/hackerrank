#include <iostream>
#include <vector>

using namespace std;

int simpleArraySum(vector<int>& ar)
{
    int res = 0;
    for (auto a : ar) {
        res += a;
    }
    return res;
}

int main()
{
    int cnt;
    cin >> cnt;

    vector<int> ar(cnt);
    for (int i = 0; i < cnt; i++) {
        cin >> ar[i];
    }

    auto res = simpleArraySum(ar);

    cout << res;

    return 0;
}
