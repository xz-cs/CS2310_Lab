#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    cout << "Enter temperature in Centigrade: ";
    double C, F, K;
    cin >> C;
    F = (9.0 / 5.0) * C + 32;
    K = (F + 459.67) * 5.0 / 9.0;
    cout << fixed << setprecision(2) << "Temperature in Fahrenheit is: " << F << "\nTemperature in Kelvin is: " << K;
    return 0;
}