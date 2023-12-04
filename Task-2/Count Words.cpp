#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int countWords(const string& s) {
    int count = 0;
    bool inWord = false;

    for (char c : s) {
        if (isalpha(c)) {
            if (!inWord) {
                count++;
                inWord = true;
            }
        }
        else {
            inWord = false;
        }
    }

    return count;
}

int main() {
    string S;
    getline(cin, S);

    cout << countWords(S) << endl;

    return 0;
}
