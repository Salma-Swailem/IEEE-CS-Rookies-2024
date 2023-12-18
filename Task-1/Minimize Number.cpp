#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> A(N);

    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }

    int op = INT_MAX;

    for (int i = 0; i < N; ++i) {
        int trailingZeros = __builtin_ctz(A[i]);
        op = min(op, trailingZeros);
    }

    cout << op << endl;

    return 0;
}
