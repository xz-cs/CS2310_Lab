#include <iostream>

using namespace std;

int main() {
    int a, b, c;
    cout << "Enter the value of A, B and C: ";
    cin >> a >> b >> c;
    if (a + b <= c || a + c <= b || b + c <= a) cout << "Impossible\n";
    else if (a == b & b == c) cout << "Equilateral\n";
    else if (a == b || b == c || c == a) cout << "Isosceles\n";
    else cout << "Scalene\n";
    return 0;
}