#include <iostream>

using namespace std;

class yyh {
private:
    char status;

public:
    void academicMode() {
        status = 'A';
    }

    void lemonMode() {
        status = 'U';
    }

    char getMode() {
        return status;
    }
};

int main() {
    yyh *yyh1;
    yyh1->lemonMode();
    int a, b, c, d;
    cout << "Please input the absolute value of a negative 4-bit binary number (from -7 to 0): " << endl;
    cin >> d >> c >> b >> a;
    cout << "Binary Number:-" << d << c << b << a << endl;
    d = 1 - d;
    c = 1 - c;
    b = 1 - b;
    a = 1 - a;
    if (a == 0) a++;
    else if (b == 0) {
        b = 1;
        a = 0;
    } else if (c == 0) {
        c = 1;
        b = a = 0;
    } else {
        d = 1;
        c = b = a = 0;
    }
    cout << "Two's Complement: " << d << c << b << a << endl;
    return 0;
}
