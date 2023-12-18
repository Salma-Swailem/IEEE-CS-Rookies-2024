#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> arr(N);

    for (int i = 0; i < N; ++i) {
        cin >> arr[i];
    }

    auto min_iterator = min_element(arr.begin(), arr.end());
    auto max_iterator = max_element(arr.begin(), arr.end());

    int min_index = distance(arr.begin(), min_iterator);
    int max_index = distance(arr.begin(), max_iterator);

    swap(arr[min_index], arr[max_index]);

    for (int i = 0; i < N; ++i) {
        cout << arr[i] << " ";
    }

    return 0;
}
