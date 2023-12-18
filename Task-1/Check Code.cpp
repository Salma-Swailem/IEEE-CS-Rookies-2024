#include <iostream>
#include <string>

using namespace std;

int main() {
    int A, B;
    string S;

    cin >> A >> B;
    cin >> S;

    if (S.size() != A + B + 1 || S[A] != '-') {
        cout << "No" << endl;
    }

    for (int i = 0; i < A + B + 1; ++i) {
        if (i != A && !isdigit(S[i])) {
            cout << "No" << endl;
        }
    }

    cout << "Yes" << endl;
}
