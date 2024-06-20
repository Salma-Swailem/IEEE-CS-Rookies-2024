#include <iostream>

using namespace std;

int main()
{
    int N, H, width = 0;

    cin >> N >> H;

    int* arr = new int[N];

    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < N; i++) {
        if (arr[i] > H) {
            width = width + 2;
        }
        else {
            width++;
        }
    }

    cout << width;

    return 0;
}