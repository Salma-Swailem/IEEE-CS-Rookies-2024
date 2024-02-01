#include <iostream>
#include <vector>
using namespace std;

int maxPathSum(int i, int j, int N, int M, vector<vector<int>>& A) {
    if (i == N - 1 && j == M - 1)
        return A[i][j];

    int downSum = (i < N - 1) ? maxPathSum(i + 1, j, N, M, A) : INT_MIN;
    int rightSum = (j < M - 1) ? maxPathSum(i, j + 1, N, M, A) : INT_MIN;

    return A[i][j] + max(downSum, rightSum);
}

int main() {
    int N, M;
    cin >> N >> M;

    vector<vector<int>> A(N, vector<int>(M));
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            cin >> A[i][j];
        }
    }

    cout << maxPathSum(0, 0, N, M, A) << endl;

    return 0;
}
