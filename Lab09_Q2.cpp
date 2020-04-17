#include <iostream>

using namespace std;

void getNameAndId(char arr[], char name[], char id[]) {
    int place = 0, i;
    for (i = 0; arr[i] != '\0'; ++i) {
        if (arr[i] < '0' || arr[i] > '9') {
            name[place] = arr[i];
            place++;
        } else {
            name[place] = '\0';
            place = 0;
            break;
        }
    }
    for (; arr[i] != '\0'; ++i) {
        id[place] = arr[i];
        place++;
    }
    id[place] = '\0';
}

int main() {
    char arr[50], name[50], id[50];
    cout << "Enter the student info: ";
    cin.getline(arr, 50);
    getNameAndId(arr, name, id);
    cout << "Student name is: " << name << "\nStudent ID is: " << id << endl;
    return 0;
}