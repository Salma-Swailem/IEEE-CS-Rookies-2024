#include <iostream>
#include <vector>

using namespace std;

void SwapRow(vector<vector<int>>& A, int rowX, int rowY) {
    swap(A[rowX - 1], A[rowY - 1]);
}

void SwapCol(vector<vector<int>>& A, int colX, int colY) {
    for (auto& row : A) {
        swap(row[colX - 1], row[colY - 1]);
    }
}

void PrintMatrix(const vector<vector<int>>& A) {
    for (const auto& row : A) {
        for (int num : row) {
            cout << num << " ";
        }
        cout << endl;
    }
}

int main() {
    int N, X, Y;
    cin >> N >> X >> Y;

    vector<vector<int>> A(N, vector<int>(N));

    for (auto& row : A) {
        for (int& num : row) {
            cin >> num;
        }
    }

    SwapRow(A, X, Y);
    SwapCol(A, X, Y);
    PrintMatrix(A);

}