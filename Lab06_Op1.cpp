#include <iostream>

using namespace std;

int main() {
    cout << "Enter the value of the money:\n";
    int total, count = 0;
    cin >> total;
    if (total == 0 || total == 1) {
        cout << "There is only 1 way in total.\n";
    } else {
        for (int i = 0; i <= total; ++i) {
            for (int j = 0; j <= total / 2; ++j) {
                for (int k = 0; k <= total / 5; ++k) {
                    for (int l = 0; l <= total / 10; ++l) {
                        if (i + 2 * j + 5 * k + 10 * l == total) {
                            count++;
                        }
                    }
                }
            }
        }
        cout << "There are " << count << " different ways in total.\n";
    }
    return 0;
}