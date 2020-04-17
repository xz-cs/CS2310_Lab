#include <iostream>

using namespace std;

int findChar(char word[], char chr[]) {
    int position = -1;
    for (int i = 0; word[i] != '\0'; ++i) {
        bool isEqual = true;
        for (int j = 0; chr[j] != '\0'; ++j) {
            if (chr[j] != word[i + j]) {
                isEqual = false;
                break;
            }
        }
        if (isEqual) position = i;
    }
    return position;
}

int main() {
    cout << "The word and chars are: ";
    char word[50], chr[50];
    cin >> word >> chr;
    cout << "The last position of " << chr << " is: " << findChar(word, chr) << endl;
    return 0;
}