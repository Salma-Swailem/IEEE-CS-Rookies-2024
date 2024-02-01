#include <iostream>
#include <vector>

using namespace std;

int main() {
    int RA, CA, RB, CB;
    cin >> RA >> CA;

    // Read matrix A
    vector<vector<int>> A(RA, vector<int>(CA));
    for (int i = 0; i < RA; ++i) {
        for (int j = 0; j < CA; ++j) {
            cin >> A[i][j];
        }
    }

    cin >> RB >> CB;

    // Read matrix B
    vector<vector<int>> B(RB, vector<int>(CB));
    for (int i = 0; i < RB; ++i) {
        for (int j = 0; j < CB; ++j) {
            cin >> B[i][j];
        }
    }

    // Check if matrices can be multiplied
    if (CA != RB) {
        cout << "Matrices cannot be multiplied." << endl;
        return 0;
    }

    // Multiply matrices
    vector<vector<int>> result(RA, vector<int>(CB));
    for (int i = 0; i < RA; ++i) {
        for (int j = 0; j < CB; ++j) {
            result[i][j] = 0;
            for (int k = 0; k < CA; ++k) {
                result[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Print result
    for (int i = 0; i < RA; ++i) {
        for (int j = 0; j < CB; ++j) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
