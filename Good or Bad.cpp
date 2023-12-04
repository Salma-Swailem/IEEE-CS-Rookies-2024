#include <iostream>
#include <string>

using namespace std;

bool isGoodString(const string& s) {
    for (int i = 0; i < s.length() - 2; ++i) {
        if (s[i] == '0' && s[i + 1] == '1' && s[i + 2] == '0') {
            return true;
        }
        if (s[i] == '1' && s[i + 1] == '0' && s[i + 2] == '1') {
            return true;
        }
    }
    return false;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        string S;
        cin >> S;

        if (isGoodString(S)) {
            cout << "Good\n";
        }
        else {
            cout << "Bad\n";
        }
    }

    return 0;
}
