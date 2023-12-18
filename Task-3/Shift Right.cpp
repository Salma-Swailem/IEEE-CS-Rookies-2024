#include <iostream>
#include <vector>

using namespace std;

void Shift(vector<int>& A, int X, int N) {
    X %= N;

    while (X--) {
        int end = A[N - 1];

        for (int i = N - 1; i > 0; --i) {
            A[i] = A[i - 1];
        }

        A[0] = end;
    }
}

int main() {
    int N, X;
    cin >> N >> X;

    vector<int> A(N);

    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }

    Shift(A, X, N);

    for (int i = 0; i < N; ++i) {
        cout << A[i] << " ";
    }
}
