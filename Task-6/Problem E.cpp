#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    int n, sum = 0, count = 0;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];
    }

    sort(arr.rbegin(), arr.rend());

    int x = 0;
    for (int i = 0; i < n; i++) {
        x += arr[i];
        count++;
        if (x > sum - x) {
            cout << count;
            break;
        }
    }

    return 0;
}