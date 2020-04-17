#include <iostream>
#include <string>

using namespace std;

int trans(char c) {
    return c - '0';
}

int combine(int a, int b) {
    return a * 10 + b;
}

int main() {
    cout << "Enter a decimal number: ";
    string str;
    cin >> str;
    int result = combine(trans(str[0]), trans(str[1])) + combine(trans(str[1]), trans(str[2])) +
                 combine(trans(str[2]), trans(str[3])) + combine(trans(str[5]), trans(str[6]));
    cout << "Sum of digits is: " << result << endl;
    return 0;
}