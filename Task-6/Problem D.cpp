#include <iostream>
#include <string>

using namespace std;

int main()
{
    string a, b;

    cin >> a;
    cin >> b;

    if (a == b) {
        cout << -1;
    }
    else {
        cout << max(a.length(), b.length());;
    }

    return 0;
}