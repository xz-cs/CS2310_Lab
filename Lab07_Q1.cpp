#include <iostream>
#include <string>

using namespace std;

string oneDigitTrans(int n) {
    string array[9] = {"One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
    return array[n - 1];
}

string wholeTenTrans(int n) {
    string array[8] = {"Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};
    return array[n / 10 - 2];
}

void print20to99(int n) {
    if (n % 10 == 0) {
        cout << wholeTenTrans(n) << endl;
    } else {
        cout << wholeTenTrans(n / 10 * 10) + ' ' + oneDigitTrans(n % 10) << endl;
    }

}

int main() {
    int num;
    cout << "Enter the integer number: ";
    cin >> num;
    print20to99(num);
    return 0;
}