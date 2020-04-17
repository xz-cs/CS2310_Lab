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

void stringSort(char *str[], int len) {
    for (int i = 0; i < len - 1; ++i) {
        for (int j = len - 1; j > i; --j) {
            if (stringCompare(str[j], str[j - 1]) == -1) swap(str[j], str[j - 1]);
        }
    }
}

int main() {
    char str[50];
    char *suffix[50] = {nullptr};
    int i;
    cout << "Enter the string:\n";
    cin >> str;
    for (i = 0; str[i] != '\0'; ++i) {
        suffix[i] = &str[i];
    }
    stringSort(suffix, i);
    cout << "The suffixes of the string are:\n";
    for (int j = 0; j < i; ++j) {
        cout << suffix[j] << endl;
    }
    return 0;
}