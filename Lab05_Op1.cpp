#include <iostream>

using namespace std;

int main() {
    int pascal[1000][1000], num;
    cout << "Enter the input row number: ";
    cin >> num;
    for (int i = 0; i < num; ++i) {
        pascal[i][0] = 1;
        pascal[i][i] = 1;
        if (i != 0) cout << 1 << ' ';
        for (int j = 1; j < i; ++j) {
            pascal[i][j] = pascal[i - 1][j - 1] + pascal[i - 1][j];
            cout << pascal[i][j] << ' ';
        }
        cout << 1 << '\n';
    }
    return 0;
}