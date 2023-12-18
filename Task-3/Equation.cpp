#include <iostream>

using namespace std;

long long power(int X, int i) {
    long long result = 1;
    for (int j = 0; j < i; ++j) {
        result *= X;
    }
    return result;
}

long long Equation(int X, int N) {
    long long result = 0;
    for (int i = 2; i <= N; i += 2) {
        result += power(X, i);
    }
    return result;
}

int main() {
    int X, N;
    cin >> X >> N;

    cout << Equation(X, N) << endl;
}
