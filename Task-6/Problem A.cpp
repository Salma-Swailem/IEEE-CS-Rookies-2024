#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int N, A, D;
    string S;

    cin >> N;
    cin >> S;

    A = count(S.begin(), S.end(), 'A');
    D = count(S.begin(), S.end(), 'D');

    if (A > D) {
        cout << "Anton";
    }
    else if (A < D) {
        cout << "Danik";
    }
    else {
        cout << "Friendship";
    }

    return 0;
}