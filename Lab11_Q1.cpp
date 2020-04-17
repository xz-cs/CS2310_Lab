#include <iostream>

using namespace std;

char *deleteStr(char *str, char delete_char) {
    int resultLen = 0, place = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != delete_char) resultLen++;
    }
    char *result = new char[resultLen + 1];
    for (int j = 0; str[j] != '\0'; j++) {
        if (str[j] != delete_char) {
            result[place] = str[j];
            place++;
        }
    }
    result[resultLen] = '\0';
    return result;
}

int main() {
    cout << "Enter the input string: ";
    char input[101];
    cin.getline(input, 100);
    cout << "Enter the input delete_char: ";
    char deleteChar;
    cin.get(deleteChar);
    char *result = deleteStr(input, deleteChar);
    cout << "The modified string is: " << result << endl;
    delete[] result;
    return 0;
}