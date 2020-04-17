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
        cout << array[l] << (l == 5 ? "\nEnter the number to search:\n" : ", ");
    }
    int target;
    cin >> target;
    int low = 0, high = 6, mid, position = -1, count = 0;
    while (high >= low) {
        count++;
        mid = (low + high) / 2;
        if (array[mid - 1] == target) {
            position = mid;
            break;
        } else if (array[mid] > target) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    if (position != -1) {
        cout << "The position of the element is: " << position - 1 << '\n';
    } else {
        cout << "The number does not exist in the array.\n";
    }
    cout << count << " iteration used.\n";
    return 0;
}