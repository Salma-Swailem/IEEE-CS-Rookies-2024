#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    long long count = 0;

    vector<int> remainder_count_x(5, 0);
    vector<int> remainder_count_y(5, 0);

    for (int i = 1; i <= n; ++i) {
        remainder_count_x[i % 5]++;
    }

    for (int j = 1; j <= m; ++j) {
        remainder_count_y[j % 5]++;
    }

    for (int r1 = 0; r1 < 5; ++r1) {
        int r2 = (5 - r1) % 5;
        count += static_cast<long long>(remainder_count_x[r1]) * remainder_count_y[r2];
    }

    cout << count << endl;

    return 0;
}
