#include <iostream>
#include <cmath>

using namespace std;

int getValue(int);

int calDigit(int);

int main() {
    cout << "Enter the number: ";
    int n;
    cin >> n;
    cout << "The value of last " << calDigit(n) << (calDigit(n) != 1 ? " digits of " : " digit of ") << n << " is: "
         << getValue(n) << endl;
    return 0;
}

int getValue(int num) {
    return num % int(pow(10, calDigit(num)));
}

int calDigit(int num) {
    int count = 0;
    while (num > 0) {
        num /= 10;
        count++;
    }
    if (count % 2 == 1) return count / 2 + 1;
    return count / 2;
}