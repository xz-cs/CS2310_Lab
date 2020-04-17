#include <iostream>

using namespace std;

void replace(char str[], char modified[]) {
    int place = 0;
    for (int i = 0; str[i] != '\0'; ++i) {
        if (str[i] != ' ') {
            modified[place] = str[i];
            place++;
        } else{
            modified[place] = '%';
            modified[place + 1] = '0';
            place += 2;
        }
    }
    modified[place] = '\0';
}

int main() {
    char str[50], modified[50];
    cout << "Enter the input string: ";
    cin.getline(str, 50);
    replace(str, modified);
    cout << "The replace string is: " << modified << endl;
    return 0;
}