#include <iostream>

using namespace std;

int len(char str[]) {
    int count = 0;
    for (int i = 0; str[i] != '\0'; ++i) {
        count++;
    }
    return count;
}

void swap(int &a, int &b) {
    int c = a;
    a = b;
    b = c;
}

void sort(char str[]) {
    int n = len(str);
    for (int i = 0; i < n - 1; ++i) {
        for (int j = n - 1; j > i; --j) {
            if (str[j] < str[j - 1]) swap(str[j], str[j - 1]);
        }
    }
}

void mergeStrings(char str1[], char str2[], char merged[]) {
    sort(str1);
    sort(str2);
    int n = len(str1);
    int j = 0, m = 0;
    for (int i = 0; i < n * 2; ++i) {
        if (j == n) {
            merged[i] = str2[m];
            m++;
        } else if (m == n) {
            merged[i] = str1[j];
            j++;
        } else if (str1[j] < str2[m]) {
            merged[i] = str1[j];
            j++;
        } else {
            merged[i] = str2[m];
            m++;
        }
    }
    merged[n * 2] = '\0';
}

int main() {
    char str1[50], str2[50], mergedStr[50];
    cout << "Input String 1: ";
    cin >> str1;
    cout << "Input String 2: ";
    cin >> str2;
    mergeStrings(str1, str2, mergedStr);
    cout << "Merged String: " << mergedStr << endl;
    return 0;
}