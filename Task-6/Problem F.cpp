#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    int n, r;
    cin >> n;

    vector<int> a(n);
    vector<int> b(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i] >> b[i];
        if (a[i] != b[i]) {
            cout << "rated";
            return 0;
        }
    }

    for (int i = 1; i < n; i++) {
        if (a[i] > a[i - 1]) {
            r = 1;
            break;
        }
        else {
            r = 0;
        }
    }

    if (r == 1) {
        cout << "unrated";
    }
    else {
        cout << "maybe";
    }

    return 0;
}