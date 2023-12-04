#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

string transformString(const string& input, const unordered_map<char, char>& mapping) {
    string result = "";

    for (char c : input) {
        if (mapping.find(c) != mapping.end()) {
            result += mapping.at(c);
        }
        else {
            result += c;
        }
    }

    return result;
}

int main() {
    string key = "PgEfTYaWGHjDAmxQqFLRpCJBownyUKZXkbvzIdshurMilNSVOtec#@_!=.+-*/";
    string original = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";

    unordered_map<char, char> encryptMap, decryptMap;

    for (size_t i = 0; i < original.length(); ++i) {
        encryptMap[original[i]] = key[i];
        decryptMap[key[i]] = original[i];
    }

    int Q;
    cin >> Q;

    string S;
    cin >> S;

    if (Q == 1) {
        cout << transformString(S, encryptMap) << endl;
    }
    else {
        cout << transformString(S, decryptMap) << endl;
    }

    return 0;
}
