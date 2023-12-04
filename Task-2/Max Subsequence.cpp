#include <iostream>
#include <string>

using namespace std;

int main() {
    int N;
    cin >> N;

    string S;
    cin >> S;

    int maxSubsequenceSize = 1;
    int currentSubsequenceSize = 1;

    for (int i = 1; i < N; ++i) {
        if (S[i] != S[i - 1]) {
            currentSubsequenceSize++;
        }
        else {
            currentSubsequenceSize = 1;
        }

        maxSubsequenceSize = max(maxSubsequenceSize, currentSubsequenceSize);
    }

    cout << maxSubsequenceSize << endl;

    return 0;
}
