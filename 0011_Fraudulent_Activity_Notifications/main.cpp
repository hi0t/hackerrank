#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int activityNotifications(const vector<int>& expenditure, int d)
{
    int res = 0;

    vector<int> tr(expenditure.begin(), expenditure.begin() + d);
    sort(tr.begin(), tr.end());

    for (int i = 0; i < expenditure.size() - d - 1; i++) {
        if (i > 0) {
            tr.erase(find(tr.begin(), tr.end(), expenditure[i - 1]));
            tr.insert(
                lower_bound(tr.begin(), tr.end(), expenditure[i + d - 1]),
                expenditure[i + d - 1]);
        }

        float median;
        if (tr.size() % 2 == 0) {
            median = tr[d / 2] + tr[d / 2 - 1];
        } else {
            median = tr[d / 2] * 2.0;
        }
        if (expenditure[i + d] >= median) {
            res++;
        }
    }

    return res;
}

int main()
{
    int n, d;
    cin >> n >> d;

    vector<int> expenditure(n);
    for (auto& e : expenditure) {
        cin >> e;
    }

    auto res = activityNotifications(expenditure, d);
    cout << res << endl;

    return 0;
}
