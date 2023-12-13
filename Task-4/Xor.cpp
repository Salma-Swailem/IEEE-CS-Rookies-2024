#include <iostream>

using namespace std;

long long cal(long long A, long long B, long long Q) {
    if (Q % 3 == 1) {
        return A;
    }
    else if (Q % 3 == 2) {
        return B;
    }
    else {
        return A ^ B;
    }
}

int main() {
    // Input
    long long A, B, Q;
    cin >> A >> B >> Q;

    // Output
    long long result = cal(A, B, Q);
    cout << result << endl;

    return 0;
}
