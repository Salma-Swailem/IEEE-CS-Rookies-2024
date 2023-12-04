#include <iostream>
#include <cctype> 

using namespace std;

int main() {
    string S;
    cin >> S;

    for (char& c : S) {
        if (c == ',') {
            c = ' ';
        }
    }

    for (char& c : S) {
        if (islower(c)) {
            c = toupper(c);
        }
        else if (isupper(c)) {
            c = tolower(c);
        }
    }

    cout << S << endl;

    return 0;
}
