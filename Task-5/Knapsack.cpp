#include <iostream>
#include <vector>
using namespace std;

int knapsack(int idx, int capacity, vector<int>& weights, vector<int>& values) {
    if (idx < 0 || capacity == 0)
        return 0;

    if (weights[idx] > capacity)
        return knapsack(idx - 1, capacity, weights, values);

    return max(knapsack(idx - 1, capacity, weights, values),
        values[idx] + knapsack(idx - 1, capacity - weights[idx], weights, values));
}

int main() {
    int N, W;
    cin >> N >> W;

    vector<int> weights(N), values(N);
    for (int i = 0; i < N; ++i) {
        cin >> weights[i] >> values[i];
    }

    cout << knapsack(N - 1, W, weights, values) << endl;

    return 0;
}
