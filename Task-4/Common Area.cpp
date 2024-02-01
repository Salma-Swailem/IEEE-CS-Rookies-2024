#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Point {
    int x, y;
};

struct Rectangle {
    Point lower_left, upper_right;
};

int findArea(Rectangle r) {
    return max(0, r.upper_right.x - r.lower_left.x) * max(0, r.upper_right.y - r.lower_left.y);
}

Rectangle intersection(Rectangle r1, Rectangle r2) {
    Rectangle result;
    result.lower_left.x = max(r1.lower_left.x, r2.lower_left.x);
    result.lower_left.y = max(r1.lower_left.y, r2.lower_left.y);
    result.upper_right.x = min(r1.upper_right.x, r2.upper_right.x);
    result.upper_right.y = min(r1.upper_right.y, r2.upper_right.y);
    return result;
}

int main() {
    int T;
    cin >> T;

    for (int t = 1; t <= T; ++t) {
        int N;
        cin >> N;

        vector<Rectangle> rectangles(N);
        for (int i = 0; i < N; ++i) {
            cin >> rectangles[i].lower_left.x >> rectangles[i].lower_left.y
                >> rectangles[i].upper_right.x >> rectangles[i].upper_right.y;
        }

        Rectangle common_area = rectangles[0];
        for (int i = 1; i < N; ++i) {
            common_area = intersection(common_area, rectangles[i]);
        }

        int area = findArea(common_area);
        cout << "Case #" << t << ": " << area << endl;
    }

    return 0;
}
