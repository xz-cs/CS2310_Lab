#include <iostream>

using namespace std;

int *merge(int *arr1, int arr1Len, int *arr2, int arr2Len) {
    int arr1Base = 0, arr2Base = 0;
    int *result = new int[arr1Len + arr2Len];
    while (arr1Base < arr1Len && arr2Base < arr2Len) {
        result[arr1Base + arr2Base] = (arr1[arr1Base] < arr2[arr2Base] ? arr1[arr1Base] : arr2[arr2Base]);
        (arr1[arr1Base] < arr2[arr2Base] ? arr1Base : arr2Base)++;
    }
    for (int place = arr1Base + arr2Base, i = 0; place < arr1Len + arr2Len; ++place, ++i) {
        result[place] = (arr1Base == arr1Len ? arr2[arr2Base + i] : arr1[arr1Base + i]);
    }
    return result;
}

int *mergeSort(int *arr, int len) {
    if (len == 1) return arr;
    return merge(mergeSort(arr, len / 2), len / 2, mergeSort(arr + len / 2, len - len / 2), len - len / 2);
}

int main() {
    int size;
    cout << "Enter the size of the array:\n";
    cin >> size;
    cout << "Enter the content of the array:\n";
    int *arr = new int[size];
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
    }
    int *sorted = mergeSort(arr, size);
    cout << "The sorted array is:\n";
    for (int i = 0; i < size; ++i) {
        cout << sorted[i] << ' ';
    }
    cout << endl;
    return 0;
}