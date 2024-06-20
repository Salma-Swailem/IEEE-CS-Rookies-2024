#include <iostream>
#include <algorithm>
#include <string> 


using namespace std;

int main()
{
    int N, X, Solved = 0;
    string S;

    cin >> N;
    for (int i = 0; i <= N; i++) {
        getline(cin, S);
        X = count(S.begin(), S.end(), '1');
        if (X > 1) { Solved++; }
    }
    cout << Solved;

    return 0;
}