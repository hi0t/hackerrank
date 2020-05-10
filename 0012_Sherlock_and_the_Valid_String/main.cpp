#include <iostream>
#include <string>

using namespace std;

string isValid(string s)
{
    int count[26] = { 0 };

    for (auto c : s) {
        count[c - 'a']++;
    }

    int first = -1;
    int first_count = 0;
    int second = -1;
    int second_count = 0;

    for (auto e : count) {
        if (e != 0) {
            if (first == -1 || first == e) {
                first = e;
                first_count++;
            } else if (second == -1 || second == e) {
                second = e;
                second_count++;
            } else {
                return "NO";
            }
        }
    }

    if (second == -1) {
        return "YES";
    } else if (first > second) {
        if (first_count == 1 && first - second == 1) {
            return "YES";
        } else if (second_count == 1) {
            return "YES";
        } else {
            return "NO";
        }
    } else {
        if (second_count == 1 && second - first == 1) {
            return "YES";
        } else if (first_count == 1) {
            return "YES";
        } else {
            return "NO";
        }
    }
}

int main()
{
    string s;
    cin >> s;

    auto res = isValid(s);

    cout << res << endl;

    return 0;
}
