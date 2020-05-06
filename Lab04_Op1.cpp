#include <iostream>

using namespace std;

int main() {
    int a, b, c, d, e, f, min, max, sum, MIN, MAX;
    cout << "Enter Value of each score: ";
    cin >> a >> b >> c >> d >> e >> f;
    sum = a + b + c + d + e + f;

    min = max = a;
    if (b < min) min = b;
    if (c < min) min = c;
    if (d < min) min = d;
    if (e < min) min = e;
    if (f < min) min = f;

    if (b > max) max = b;
    if (c > max) max = c;
    if (d > max) max = d;
    if (e > max) max = e;
    if (f > max) max = f;

    if (min == a) a = -1;
    else if (min == b) b = -1;
    else if (min == c) c = -1;
    else if (min == d) d = -1;
    else if (min == e) e = -1;
    else if (min == f) f = -1;

    if (max == a) a = -1;
    else if (max == b) b = -1;
    else if (max == c) c = -1;
    else if (max == d) d = -1;
    else if (max == e) e = -1;
    else if (max == f) f = -1;

    MIN = 1000000;
    MAX = -1;
    if (a < MIN && a != -1) MIN = a;
    if (b < MIN && b != -1) MIN = b;
    if (c < MIN && c != -1) MIN = c;
    if (d < MIN && d != -1) MIN = d;
    if (e < MIN && e != -1) MIN = e;
    if (f < MIN && f != -1) MIN = f;

    if (a > MAX && a != -1) MAX = a;
    if (b > MAX && b != -1) MAX = b;
    if (c > MAX && c != -1) MAX = c;
    if (d > MAX && d != -1) MAX = d;
    if (e > MAX && e != -1) MAX = e;
    if (f > MAX && f != -1) MAX = f;

    cout << "The effective score is: " << (double(sum - min - max - MIN - MAX)) / 2.0 << endl;
    return 0;
}