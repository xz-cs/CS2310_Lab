#include <iostream>

using namespace std;

int main() {
    cout << "All output numbers are:\n";
    int first, last;
    for (int i = 1000; i < 10000; ++i) {
        first = i / 100;
        last = i % 100;
        if ((first + last) * (first + last) == i) cout << i << '\n';
    }
    return 0;
}