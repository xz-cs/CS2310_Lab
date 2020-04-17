#include <iostream>

using namespace std;

int main() {
    int num[20], result[20], size;
    cout << "Enter the size of the array:\n";
    cin >> size;
    cout << "Enter the elements of the array:\n";
    for (int i = 0; i < size; i++) {
        cin >> num[i];
    }
    cout << "The output is:\n";
    for (int j = 0; j < size; ++j) {
        int max = -1;
        for (int k = j + 1; k < size; ++k) {
            if (num[k] < num[j] && num[k] > max)
                max = num[k];
        }
        result[j] = max;
    }
    for (int l = 0; l < size; l++) {
        cout << result[l] << (l == size - 1 ? "\n" : ", ");
    }
    return 0;
}
