#include <iostream>

using namespace std;

void dateOf2017(char date[5]) {
    cout << "2017-" << date << " is ";
    int month = (date[0] - '0') * 10 + date[1] - '0';
    int day = (date[3] - '0') * 10 + date[4] - '0';
    int difference = 0;
    for (int i = 1; i < month; ++i) {
        if (i == 2) difference += 28;
        else if ((i <= 7 && i % 2 == 1) || (i >= 8 && i % 2 == 0)) difference += 31;
        else difference += 30;
    }
    difference += day - 1;
    switch (difference % 7) {
        case 1:
            cout << "Monday\n";
            break;
        case 2:
            cout << "Tuesday\n";
            break;
        case 3:
            cout << "Wednesday\n";
            break;
        case 4:
            cout << "Thursday\n";
            break;
        case 5:
            cout << "Friday\n";
            break;
        case 6:
            cout << "Saturday\n";
            break;
        default:
            cout << "Sunday\n";
    }
}

int main() {
    cout << "Enter the date in 2017: ";
    char date[5];
    cin >> date;
    dateOf2017(date);
    return 0;
}