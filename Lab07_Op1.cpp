#include <iostream>
#include <iomanip>

using namespace std;

int ToBin(int);

double ToBin(double);

int main() {
    cout << "Enter the decimal double number is: ";
    double num, temp;
    cin >> num;
    temp = ToBin(num - int(num));
    cout << fixed << setprecision(int(temp));
    cout << "The corresponding binary double is: " << ToBin(int(num)) + temp - int(temp) << endl;
    return 0;
}

int ToBin(int n) {
    int result = 0, multiple = 1;
    while (n > 0) {
        result += (n % 2) * multiple;
        n /= 2;
        multiple *= 10;
    }
    return result;
}

double ToBin(double n) {
    double result = 0, multiple = 0.1, count = 0;
    while (n > 0) {
        result += int(n * 2) * multiple;
        n = n * 2 - int(n * 2);
        multiple *= 0.1;
        count++;
    }
    return count + result;
}