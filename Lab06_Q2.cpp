#include <iostream>

using namespace std;

int main() {
    cout << "Enter the element in the array:\n";
    int array[6];
    for (int &i:array) {
        cin >> i;
    }
    cout << "The sorted array is:\n";
    int temp, k;
    for (int j = 0; j < 6; ++j) {
        temp = array[j];
        for (k = j; k > 0 && array[k - 1] > temp; k--) {
            array[k] = array[k - 1];
        }
        array[k] = temp;
    }
    for (int l = 0; l < 6; l++) {
        cout << array[l] << (l == 5 ? "\n" : ", ");
    }
    return 0;
}