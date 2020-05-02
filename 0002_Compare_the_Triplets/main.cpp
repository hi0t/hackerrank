#include <iostream>
#include <vector>

using namespace std;

vector<int> compareTriplets(vector<int>& a, vector<int>& b)
{
    vector<int> res(2);

    for (int i = 0; i < a.size(); i++) {
        if (a[i] > b[i]) {
            res[0]++;
        } else if (a[i] < b[i]) {
            res[1]++;
        }
    }

    return res;
}

int main()
{
    vector<int> a(3);
    for (auto& e : a) {
        cin >> e;
    }

    vector<int> b(3);
    for (auto& e : b) {
        cin >> e;
    }

    auto res = compareTriplets(a, b);

    cout << res[0] << " " << res[1];

    return 0;
}
