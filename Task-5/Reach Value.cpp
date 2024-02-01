#include <iostream>
#include <vector>
using namespace std;

bool canReachN(long long current, long long target) {
    if (current == target) // Base case: current value equals target
        return true;
    if (current > target) // Base case: current value exceeds target
        return false;

    // Recursive cases: try both operations
    return canReachN(current * 10, target) || canReachN(current * 20, target);
}

int main() {
    int T;
    cin >> T;

    vector<long long> testCases(T);
    for (int i = 0; i < T; ++i) {
        cin >> testCases[i];
    }

    for (int i = 0; i < T; ++i) {
        if (canReachN(1, testCases[i]))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
