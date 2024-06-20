#include <iostream>
#include <algorithm>
#include <vector>
#include <tuple>


using namespace std;

int main() {
    int n, m;

    cin >> n;
    vector<long long> v(n);

    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    cin >> m;
    vector<tuple<int, int, int>> queries(m);

    for (int i = 0; i < m; i++) {
        int type, l, r;
        cin >> type >> l >> r;
        queries[i] = make_tuple(type, l, r);
    }

    vector<long long> u = v;
    sort(u.begin(), u.end());

    vector<long long> prefix_sum_v(n + 1, 0);
    vector<long long> prefix_sum_u(n + 1, 0);

    for (int i = 0; i < n; i++) {
        prefix_sum_v[i + 1] = prefix_sum_v[i] + v[i];
        prefix_sum_u[i + 1] = prefix_sum_u[i] + u[i];
    }

    for (const auto& query : queries) {
        int type, l, r;
        tie(type, l, r) = query;

        long long sum = 0;
        if (type == 1) {
            cout << prefix_sum_v[r] - prefix_sum_v[l - 1] << endl;
        }
        else {
            cout << prefix_sum_u[r] - prefix_sum_u[l - 1] << endl;
        }
    }

    return 0;
}
