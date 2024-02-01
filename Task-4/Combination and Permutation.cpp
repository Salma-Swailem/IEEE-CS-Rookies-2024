#include <iostream>

using namespace std;

long long factorial(int n) {
    if (n == 0 || n == 1) return 1;
    return n * factorial(n - 1);
}

long long nCr(int A, int B) {
    return factorial(A) / (factorial(B) * factorial(A - B));
}

long long nPr(int A, int B) {
    return factorial(A) / factorial(A - B);
}

int main() {
    int A, B;
    cin >> A >> B;

    long long ncrValue = nCr(A, B);
    long long nprValue = nPr(A, B);

    cout << ncrValue << " " << nprValue << endl;

    return 0;
}
