#include <iostream>
#include <algorithm>

using namespace std;

bool Palindrome(const string& S) {
    return equal(S.begin(), S.begin() + S.length() / 2, S.rbegin());
}

string toBinary(int n) {
    string bin;

    while (n > 0) {
        bin = char('0' + (n % 2)) + bin;
        n /= 2;
    }

    return (bin.empty() ? "0" : bin);
}

int main() {
    int N;
    cin >> N;

    if (N % 2 == 1 && Palindrome(toBinary(N))) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }
}
