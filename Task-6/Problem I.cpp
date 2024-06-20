#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> numbers(n);

    for (int i = 0; i < n; ++i) {
        cin >> numbers[i];
    }

    int e_count = 0;
    int e_index = -1;

    int o_count = 0;
    int o_index = -1;

    for (int x = 0; x < n; ++x) {
        if (numbers[x] % 2 == 0) {
            e_count++;
            e_index = x;
        }
        else {
            o_count++;
            o_index = x;
        }
    }

    if (e_count == 1) {
        cout << e_index + 1 << endl;
    }
    else {
        cout << o_index + 1 << endl;
    }

    return 0;
}
