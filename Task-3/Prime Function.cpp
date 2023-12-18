#include <iostream>
#include <cmath>

using namespace std;

bool Prime(int N) {
    if (N <= 1) {
        return false;
    }

    for (int i = 2; i <= sqrt(N); ++i) {
        if (N % i == 0) {
            return false;
        }
    }

    return true;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        cout << (Prime(N) ? "YES" : "NO") << endl;
    }
}
