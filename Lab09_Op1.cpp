#include <iostream>

using namespace std;

int countChar(char word[], char chr[]) {
    int count = 0;
    for (int i = 0; word[i] != '\0'; ++i) {
        bool isEqual = true;
        for (int j = 0; chr[j] != '\0'; ++j) {
            if (chr[j] != word[i + j]) {
                isEqual = false;
                break;
            }
        }
        if (isEqual) count++;
    }
    return count;
}

int main() {
    cout << "Enter two strings: ";
    char word[50], chr[50];
    cin >> word >> chr;
    cout << "The occurrence of " << chr << " in " << word << " is: " << countChar(word, chr) << endl;
    return 0;
}