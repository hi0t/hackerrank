#include <iostream>
#include <vector>

using namespace std;

int minimumSwaps(vector<int>& arr)
{
    int cnt = 0;

    for (int i = 0; i < arr.size() - 1;) {
        if (arr[i] != i + 1) {
            swap(arr[i], arr[arr[i] - 1]);
            cnt++;
        } else {
            i++;
        }
    }

    return cnt;
}

int main()
{
    int n;
    cin >> n;

    vector<int> arr(n);
    for (auto& e : arr) {
        cin >> e;
    }

    auto res = minimumSwaps(arr);
    cout << res << "\n";

    return 0;
}
