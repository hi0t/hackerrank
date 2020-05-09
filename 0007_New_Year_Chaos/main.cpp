#include <iostream>
#include <vector>
using namespace std;

void solution(vector<int>& q)
{
    int res = 0;

    for (int i = 0; i < q.size(); i++) {
        if ((q[i] - (i + 1)) > 2) {
            cout << "Too chaotic" << endl;
            return;
        }
    }

    bool swapped;
    for (int i = 0; i < q.size() - 1; i++) {
        swapped = false;
        for (int j = 0; j < q.size() - i - 1; j++) {
            if (q[j] > q[j + 1]) {
                swap(q[j], q[j + 1]);
                swapped = true;
                res++;
            }
        }
        if (swapped == false)
            break;
    }

    cout << res << endl;
}

int main()
{
    int t, n;

    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> n;
        vector<int> q(n);
        for (auto& e : q) {
            cin >> e;
        }
        solution(q);
    }

    return 0;
}
