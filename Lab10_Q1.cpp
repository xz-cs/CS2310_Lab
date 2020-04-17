#include <iostream>

using namespace std;

void findWord(char *arr, int *i, int *count) {
    *count = 0;
    while (arr[*i] != ' ' && arr[*i] != '\0') {
        *count = *count + 1;
        *i = *i + 1;
    }
}

int main() {
    char str[50];
    int count, word_len = 0;
    cout << "Enter the content of the string:\n";
    cin.getline(str, 50);
    for (int i = 0; str[i] != '\0'; ++i) {
        if (str[i] != ' ') {
            findWord(str, &i, &count);
            word_len++;
            cout << "Word " << word_len << " has " << count << " characters.\n";
        }
    }
    cout << "The number of words in the string is: " << word_len << endl;
    return 0;
}