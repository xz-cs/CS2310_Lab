#include <iostream>

using namespace std;

int stringCompare(char *str1, char *str2) {
    int i;
    for (i = 0; str1[i] != '\0' && str2[i] != '\0'; ++i) {
        if (str1[i] > str2[i]) return 1;
        else if (str1[i] < str2[i]) return -1;
    }
    if (str1[i] != '\0') return 1;
    else if (str2[i] != '\0') return -1;
    else return 0;
}

void swap(int &a, int &b) {
    int c = a;
    a = b;
    b = c;
}

void stringSort(char str[][50], int len) {
    for (int i = 0; i < len - 1; ++i) {
        for (int j = len - 1; j > i; --j) {
            if (stringCompare(str[j], str[j - 1]) == -1) swap(str[j], str[j - 1]);
        }
    }
}

int main() {
    int n;
    cout << "Enter the number of the strings:\n";
    cin >> n;
    char str[15][50];
    cout << "Enter the contents of each string:\n";
    for (int i = 0; i < n; ++i) {
        cin >> str[i];
    }
    stringSort(str, n);
    cout << "The sorted strings are:\n";
    for (int j = 0; j < n; ++j) {
        cout << str[j] << endl;
    }
    return 0;
}