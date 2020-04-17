#include <iostream>
#include <string>

using namespace std;

int main() {
    cout << "Enter the input chars: ";
    char inputChar = 0;
    int count[6] = {0};
    const string type[6] = {"uppercase letters", "lowercase letters", "+", "-", "*", "/"};
    while (inputChar != '0') {
        cin >> inputChar;
        if (inputChar >= 65 && inputChar <= 90) count[0]++;
        else if (inputChar >= 97 && inputChar <= 122) count[1]++;
        else {
            switch (inputChar) {
                case '+':
                    count[2]++;
                    break;
                case '-':
                    count[3]++;
                    break;
                case '*':
                    count[4]++;
                    break;
                case '/':
                    count[5]++;
                    break;
            }
        }
    }
    if (count[0] + count[1] + count[2] + count[3] + count[4] + count[5] == 0) {
        cout << "Cannot find any chars\n";
    } else {
        for (int i = 0; i < 6; ++i) {
            if (count[i] != 0) cout << "The number of " << type[i] << " is: " << count[i] << '\n';
        }
    }
    return 0;
}