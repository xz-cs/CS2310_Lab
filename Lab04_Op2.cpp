#include <iostream>

using namespace std;

int main() {
    double x1, y1, x2, y2, k1, k2;
    cout << "Enter the points on the first line: ";
    cin >> x1 >> y1 >> x2 >> y2;
    k1 = fabs(x1 - x2) > 0.0001 ? (y1 - y2) / (x1 - x2) : x1 - x2;
    cout << "Enter the points on the second line: ";
    cin >> x1 >> y1 >> x2 >> y2;
    k2 = fabs(x1 - x2) > 0.0001 ? (y1 - y2) / (x1 - x2) : x1 - x2;
    cout << (fabs(k1 - k2) <= 0.0001 ? "The two straight lines have no intersections.\n"
                                     : "The two straight lines have an intersection.\n") << endl;
    return 0;
}