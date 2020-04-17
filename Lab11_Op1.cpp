#include <iostream>

using namespace std;

int search(int arr[][2], int target, int length) {
    for (int i = 0; i < length; ++i) {
        if (arr[i][0] == target) return i;
    }
    return -1;
}

int main() {
    int size;
    cout << "Enter the size of the array:\n";
    cin >> size;
    int count[50][2] = {0}, content, place = 0;
    cout << "Enter the content of the array:\n";
    for (int i = 0; i < size; ++i) {
        cin >> content;
        int searchResult = search(count, content, place);
        if (searchResult != -1) count[searchResult][1]++;
        else {
            count[place][0] = content;
            count[place][1] = 1;
            place++;
        }
    }
    int maxTimes = 0;
    bool allEqual = true;
    for (int j = 0; j < place; ++j) {
        if (count[j][1] > maxTimes) maxTimes = count[j][1];
        if (j > 0 && count[j - 1][1] != count[j][1]) allEqual = false;
    }
    if (allEqual) cout << "The array does not have a mode.\n";
    else {
        int modeCount = 0;
        for (int i = 0; i < place; ++i) {
            if (count[i][1] == maxTimes) modeCount++;
        }
        if (modeCount == 1) cout << "The mode of the array is ";
        else cout << "The modes of the array are:\n";
        for (int j = 0; j < place; ++j) {
            if (count[j][1] == maxTimes) cout << count[j][0] << endl;
        }
    }
    return 0;
}