#include <iostream>

using namespace std;

int gcd(int a, int b);

int lcm(int a, int b);

int main() {
    cout << "Enter the two integers: ";
    int a, b;
    cin >> a >> b;
    cout << "The GCD of " << a << " and " << b << " is: " << gcd(a, b) << "\nThe LCM of " << a << " and " << b
         << " is: " << lcm(a, b) << endl;
    return 0;
}

int gcd(int a, int b) {
    if (a % b == 0) return b;
    return gcd(b, a % b);
}

int lcm(int a, int b) {
    return a * b / gcd(a, b);
}