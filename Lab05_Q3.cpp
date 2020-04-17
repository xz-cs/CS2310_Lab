#include <iostream>

using namespace std;

int main() {
    int num;
    cout << "Enter the input positive number: ";
    cin >> num;
    int temp = num;
    cout << "\nThe prime factorization of " << num << " is:\n";
    if (num == 1) {
        cout << 1;
    } else {
        for (int i = 2; i <= temp; ++i) {
            while (num % i == 0) {
                cout << i << ' ';
                num /= i;
            }
        }
    }
    return 0;
}