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

int main() {
    char str1[50], str2[50];
    cout << "Enter the first string:\n";
    cin >> str1;
    cout << "Enter the second string:\n";
    cin >> str2;
    switch (stringCompare(str1, str2)) {
        case 1:
            cout << "The first string is larger.\n";
            break;
        case -1:
            cout << "The second string is larger.\n";
            break;
        default:
            cout << "The two strings are equal.\n";
    }
    return 0;
}