#include <iostream>
#include <string>

using namespace std;

bool hasHelloSubsequence(const string& s) {
    string target = "hello";
    int targetIndex = 0;

    for (char c : s) {
        if (c == target[targetIndex]) {
            targetIndex++;
            if (targetIndex == target.length()) {
                return true;
            }
        }
    }

    return false;
}

int main() {
    string S;
    cin >> S;

    if (hasHelloSubsequence(S)) {
        cout << "YES\n";
    }
    else {
        cout << "NO\n";
    }

    return 0;
}
