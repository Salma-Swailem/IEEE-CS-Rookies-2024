#include <iostream>
#include <climits>
#include <vector>


using namespace std;

int SmallestPair(int N, vector<int>& arr) {
    int min_sum = INT_MAX;

    for (int i = 0; i < N; ++i) {
        for (int j = i + 1; j < N; ++j) {
            int current = arr[i] + arr[j] + j - i;
            min_sum = min(min_sum, current);
        }
    }

    return min_sum;
}


int main() {
    int T;
    int N;

    cin >> T;

    while (T--) {

        cin >> N;

        vector<int> arr(N);

        for (int i = 0; i < N; ++i) {
            cin >> arr[i];
        }

        int result = SmallestPair(N, arr);
        cout << result << endl;

    }
}
