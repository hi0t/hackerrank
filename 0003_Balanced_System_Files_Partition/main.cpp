#include <iostream>
#include <unordered_set>
#include <vector>

using namespace std;

int mostBalancedPartition(vector<int> parent, vector<int> files_size)
{
    unordered_set<int> visisted;
    int sum, i, r;

    r = parent.size() - 1;
    sum = 0;
    while (r > 0) {
        i = r;
        while (i != 0 && visisted.count(i) == 0) {
            sum += files_size[i];
            visisted.insert(i);
            i = parent[i];
        }
        while (r > 0 && visisted.count(r) == 1) {
            r--;
        }
    }
}

int main()
{
    int cnt;

    cin >> cnt;
    vector<int> parent(cnt);
    for (auto& e : parent) {
        cin >> e;
    }

    cin >> cnt;
    vector<int> files_size(cnt);
    for (auto& e : files_size) {
        cin >> e;
    }

    auto res = mostBalancedPartition(parent, files_size);

    cout << res << endl;

    return 0;
}
