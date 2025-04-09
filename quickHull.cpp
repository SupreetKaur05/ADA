#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

struct Point {
    int x, y;
    bool operator==(const Point& p) const {
        return x == p.x && y == p.y;
    }
};

int findSide(Point a, Point b, Point p) {
    int val = (p.y - a.y) * (b.x - a.x) - (p.x - a.x) * (b.y - a.y);
    if (val > 0) return 1;
    if (val < 0) return -1;
    return 0;
}

int lineDist(Point a, Point b, Point p) {
    return abs((p.y - a.y) * (b.x - a.x) - (p.x - a.x) * (b.y - a.y));
}

void quickHull(vector<Point>& points, Point a, Point b, int side, vector<Point>& hull) {
    int index = -1;
    int maxDist = 0;

    for (int i = 0; i < points.size(); i++) {
        int temp = lineDist(a, b, points[i]);
        if (findSide(a, b, points[i]) == side && temp > maxDist) {
            index = i;
            maxDist = temp;
        }
    }

    if (index == -1) {
        if (find(hull.begin(), hull.end(), a) == hull.end()) hull.push_back(a);
        if (find(hull.begin(), hull.end(), b) == hull.end()) hull.push_back(b);
        return;
    }

    quickHull(points, points[index], a, -findSide(points[index], a, b), hull);
    quickHull(points, points[index], b, -findSide(points[index], b, a), hull);
}

void computeConvexHull(vector<Point>& points) {
    int n = points.size();
    if (n < 3) {
        cout << "Convex hull not possible\n";
        return;
    }

    int min_x = 0, max_x = 0;
    for (int i = 1; i < n; i++) {
        if (points[i].x < points[min_x].x) min_x = i;
        if (points[i].x > points[max_x].x) max_x = i;
    }

    vector<Point> hull;
    quickHull(points, points[min_x], points[max_x], 1, hull);
    quickHull(points, points[min_x], points[max_x], -1, hull);

    cout << "\nPoints on the Convex Hull:\n";
    for (auto& p : hull) {
        cout << "(" << p.x << ", " << p.y << ")\n";
    }
}

int main() {
    int n;
    cout << "Enter number of points: ";
    cin >> n;

    vector<Point> points(n);
    cout << "Enter the points (x y):\n";
    for (int i = 0; i < n; i++) {
        cin >> points[i].x >> points[i].y;
    }

    computeConvexHull(points);
    return 0;
}
