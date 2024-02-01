#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

double calculateAverage(const vector<int>& A, int n, int index = 0, double sum = 0) {
    if (index == n)
        return sum / n;

    sum += A[index];
    return calculateAverage(A, n, index + 1, sum);
}

int main() {
    int N;
    cin >> N;

    vector<int> A(N);
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }

    double average = calculateAverage(A, N);
    cout << fixed << setprecision(6) << average << endl;

    return 0;
}
