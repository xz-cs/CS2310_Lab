#include <iostream>

using namespace std;

int main() {
    int a, b, c, d;
    cout << "Please input the absolute value of a negative 4-bit binary number (from -7to 0): " << endl;
    cin >> d >> c >> b >> a;
    cout << "Binary Number:-" << d << c << b << a << endl;
    d = 1 - d;
    c = 1 - c;
    b = 1 - b;
    a = 1 - a;

    int cfA = (a + 1) / 2;
    a = (a + 1) % 2;

    int cfB = (b + cfA) / 2;
    b = (b + cfA) % 2;

    int cfC = (c + cfB) / 2;
    c = (c + cfB) % 2;

    d = (d + cfC) % 2;

    cout << "Two's Complement: " << d << c << b << a << endl;
    return 0;
}
