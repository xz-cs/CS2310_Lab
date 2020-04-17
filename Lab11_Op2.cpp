#include <iostream>

using namespace std;

int len(char *str) {
    int i = 0;
    for (; str[i] != '\0'; ++i);
    return i;
}

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

void sortStr(char **str, int num) {
    for (int i = 0; i < num - 1; i++) {
        for (int j = 0; j < num - 1 - i; j++) {
            if (stringCompare(str[j], str[j + 1]) == 1) {
                char *temp = str[j];
                str[j] = str[j + 1];
                str[j + 1] = temp;
            }
        }
    }
}

int main() {
    int num;
    cout << "Enter the number of strings: ";
    cin >> num;
    cout << "Enter the input strings: ";
    char **input = new char *[num];
    for (int i = 0; i < num; ++i) {
        char temp[50];
        cin >> temp;
        input[i] = new char[len(temp) + 1];
        int j;
        for (j = 0; temp[j] != '\0'; ++j) {
            input[i][j] = temp[j];
        }
        input[i][j] = '\0';
    }
    cout << "Sorted result: ";
    sortStr(input, num);
    for (int k = 0; k < num; ++k) {
        cout << input[k] << ' ';
        delete[] input[k];
    }
    cout << '\n';
    delete[] input;
    return 0;
}