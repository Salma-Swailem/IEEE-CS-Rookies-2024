#include <iostream>
#include <string>

using namespace std;

int main() {
    int n, s, t;
    string road;

    cin >> n;
    cin >> road;


    if (road.find_first_of('L') == -1) {
        s = road.find_first_of('R') + 1;
        t = road.find_last_of('R') + 2;
    }
    else if (road.find_first_of('R') == -1) {
        s = road.find_last_of('L') + 1;
        t = road.find_first_of('L');
    }
    else if (road.find_first_of('R') < road.find_first_of('L')) {
        s = road.find_first_of('R') + 1;
        t = road.find_first_of('L');
    }
    else {
        t = road.find_first_of('R');
        s = road.find_first_of('L') + 1;
    }

    cout << s << ' ' << t;


    return 0;
}
