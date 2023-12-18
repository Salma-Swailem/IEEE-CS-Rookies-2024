#include <iostream>
#include <vector>

using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        vector<int> A(N);

        for (int i = 0; i < N; ++i) {
            cin >> A[i];
        }

        int result = 1; 
        int count = 1;

        for (int i = 1; i < N; ++i) {
            count = (A[i] >= A[i - 1]) ? count + 1 : 1;
            result += count;
        }

        cout << result << endl;
    }
}
