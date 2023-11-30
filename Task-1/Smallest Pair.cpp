#include <iostream>
#include <climits>

using namespace std;

int smallest_sum(int N, int arr[]) {
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
    cin >> T;

    for (int t = 0; t < T; ++t) {
        int N;
        cin >> N;

        int* arr = new int[N];

        for (int i = 0; i < N; ++i) {
            cin >> arr[i];
        }

        int result = smallest_sum(N, arr);
        cout << result << endl;

        delete[] arr;
    }

    return 0;
}
