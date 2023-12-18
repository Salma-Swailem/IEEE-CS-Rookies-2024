#include <iostream>
#include <vector>

using namespace std;

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

    for (int i = 0; i < N; ++i) {
        int max_e = arr[i];

        for (int j = i; j < N; ++j) {
            max_e = max(max_e, arr[j]);
            cout << max_e << " ";
        }
    }

    cout << endl;
    }
}
