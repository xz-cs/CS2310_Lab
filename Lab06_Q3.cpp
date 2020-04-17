#include <iostream>

using namespace std;

void sortTwo(int *mainArray, int *sumArray, int size) {
    int temp, k, temp2;
    for (int j = 0; j < size; ++j) {
        temp = mainArray[j];
        temp2 = sumArray[j];
        for (k = j; k > 0 && mainArray[k - 1] > temp; k--) {
            mainArray[k] = mainArray[k - 1];
            sumArray[k] = sumArray[k - 1];
        }
        mainArray[k] = temp;
        sumArray[k] = temp2;
    }
}

int main() {
    int count[11] = {0};
    int sum[11] = {2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    for (int i = 1; i <= 6; ++i) {
        for (int j = 1; j <= 6; ++j) {
            count[i + j - 2]++;
        }
    }
    sortTwo(count, sum, 11);
    for (int k = 0; k < 11; ++k) {
        cout << count[k] << " occurrence(s) of the sum " << sum[k] << '\n';
    }
    return 0;
}