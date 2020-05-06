#include <iostream>

using namespace std;

void find(int *arr, int n, int start, int &max, int &sellDay, int &buyDay) {
    if (start == n) return;
    int maxVal = arr[start], sell = start, buy = start;
    for (int i = start; i < n; ++i) {
        if (arr[i] > maxVal) {
            maxVal = arr[i];
            sell = i;
        }
    }
    int minVal = arr[start];
    for (int j = start; j < sell; ++j) {
        if (arr[j] < minVal) {
            minVal = arr[j];
            buy = j;
        }
    }
    if (maxVal - minVal > max) {
        max = maxVal - minVal;
        sellDay = sell + 1;
        buyDay = buy + 1;
    }
    find(arr, n, sell + 1, max, sellDay, buyDay);
}

int main() {
    int n, max = 0, sellDay, buyDay;
    cout << "Enter the size of the array:\n";
    cin >> n;
    cout << "Enter the content of the array:\n";
    int *arr = new int[n];
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    find(arr, n, 0, max, sellDay, buyDay);
    cout << "The largest profit is:" << max << "\nBuy the stock on day " << buyDay << "\nSell the stock on day "
         << sellDay << endl;
    return 0;
}