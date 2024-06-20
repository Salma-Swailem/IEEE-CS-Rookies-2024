#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

bool is_k_good_number(int num, int k) {
    string num_str = to_string(num);
    vector<bool> digits_present(k + 1, false);

    for (char c : num_str) {
        int digit = c - '0';
        if (digit <= k) {
            digits_present[digit] = true;
        }
    }

    return all_of(digits_present.begin(), digits_present.end(), [](bool present) { return present; });
}

int main() {
    int n, k;
    cin >> n >> k;

    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    int count = 0;
    for (int num : a) {
        if (is_k_good_number(num, k)) {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}
