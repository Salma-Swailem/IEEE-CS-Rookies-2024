#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int charToInt(char c) {
    if (c >= '0' && c <= '9') {
        return c - '0';
    }
    else {
        return c - 'A' + 10;
    }
}

char intToChar(int num) {
    if (num >= 0 && num <= 9) {
        return char(num + '0');
    }
    else {
        return char(num - 10 + 'A');
    }
}

long long ToDecimal(string N, int X) {
    long long decimalValue = 0;
    int power = 0;
    for (int i = N.length() - 1; i >= 0; --i) {
        decimalValue += charToInt(N[i]) * pow(X, power);
        power++;
    }
    return decimalValue;
}

string ToBaseX(long long N, int X) {
    if (N == 0) return "0";

    string result = "";
    while (N > 0) {
        result = intToChar(N % X) + result;
        N /= X;
    }
    return result;
}

int main() {
    int T, X;
    long long N_decimal;
    string N_baseX;

    cin >> T >> N_baseX >> X;

    if (T == 1) {
        N_decimal = ToDecimal(N_baseX, X);
        cout << N_decimal << endl;
    }
    else if (T == 2) {
        N_decimal = stoll(N_baseX);
        cout << ToBaseX(N_decimal, X) << endl;
    }

    return 0;
}
