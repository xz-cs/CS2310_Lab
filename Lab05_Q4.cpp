#include <iostream>

using namespace std;

int main() {
    cout << "Enter the diagonal length: ";
    int length;
    cin >> length;
    while (length <= 0 || length % 2 == 0) {
        cout << "Please enter an odd positive number!\n";
        cin >> length;
    }
    for (int i = 0; i <= (length - 1) / 2; ++i, cout << '\n') {
        for (int j = 0; j < length; ++j) {
            if (j >= (length - 1) / 2 - i && j <= (length - 1) / 2 + i) {
                cout << '*';
            } else {
                cout << ' ';
            }
        }
    }
    for (int k = 1; k <= (length - 1) / 2; ++k, cout << '\n') {
        for (int l = 0; l < length; ++l) {
            if (l >= k && l <= length - 1 - k) {
                cout << '*';
            } else {
                cout << ' ';
            }
        }
    }
    return 0;
}