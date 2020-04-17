#include <iostream>

using namespace std;

char *replace(char *str, char *space) {
    int spaceLen = 0, resultLen = 0;
    for (; space[spaceLen] != '\0'; spaceLen++);
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ') resultLen++;
        else resultLen += spaceLen;
    }
    char *result = new char[resultLen + 1];
    int place = 0;
    for (int j = 0; str[j] != '\0'; j++) {
        if (str[j] != ' ') {
            result[place] = str[j];
            place++;
        } else {
            for (int k = 0; k < spaceLen; k++) {
                result[place] = space[k];
                place++;
            }
        }
    }
    result[resultLen] = '\0';
    return result;
}

int main() {
    char str[101], space[101];
    cout << "Enter the input string: ";
    cin.getline(str, 100);
    cout << "Enter the input space str: ";
    cin.getline(space, 100);
    char *result = replace(str, space);
    cout << "The modified string is: " << result << endl;
    delete[] result;
    return 0;
}