#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    cout << "Enter the value of a, b and c for quadratic equation: " << fixed << setprecision(1);
    double a, b, c, delta, x, y;
    cin >> a >> b >> c;
    delta = (b * b - 4 * a * c);
    x = ((-b + sqrt(delta)) / (2 * a));
    y = ((-b - sqrt(delta)) / (2 * a));
    if (delta == 0) cout << "The Quadratic Equation has two equal real roots: " << x;
    else if (delta > 0) cout << "The Quadratic Equation has two real roots: " << x << " and " << y;
    else {
        double p = -b / (2 * a);
        double q = sqrt(-delta) / (2 * a);
        cout << "The Quadratic Equation has two Complex roots:\n" << p << '+' << q << "i\n" << p << '-' << q << 'i';
    }
    return 0;
}