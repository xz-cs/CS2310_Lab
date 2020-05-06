#include <iostream>

using namespace std;

int main() {
    int a, b, c, d, min, max, sum;
    cout << "Enter 4 integer values: ";
    cin >> a >> b >> c >> d;
    sum = a + b + c + d;
    min = max = a;
    if (b < min) min = b;
    if (c < min) min = c;
    if (d < min) min = d;
    if (b > max) max = b;
    if (c > max) max = c;
    if (d > max) max = d;
    cout << "The median of 4 values is: " << (double(sum - min - max)) / 2.0 << endl;
    return 0;
}