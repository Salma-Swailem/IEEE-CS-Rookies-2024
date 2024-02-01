#include <iostream>
#include <vector>
using namespace std;

void printDigits(int n) {
    if (n < 10) {
        cout << n << " ";
        return;
    }
    printDigits(n / 10);
    cout << n % 10 << " ";
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        printDigits(N);
        cout << endl;
    }

    return 0;
}
