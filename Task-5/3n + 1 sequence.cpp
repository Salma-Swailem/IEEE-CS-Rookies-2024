#include <iostream>
using namespace std;

int sequenceLength(int n, int length = 1) {
    if (n == 1)
        return length;
    else if (n % 2 == 0)
        return sequenceLength(n / 2, length + 1);
    else
        return sequenceLength(3 * n + 1, length + 1);
}

int main() {
    int n;
    cin >> n;

    cout << sequenceLength(n) << endl;

    return 0;
}
