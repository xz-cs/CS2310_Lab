#include <iostream>

using namespace std;

class Records {
private:
    int count;
    double **arr;
    double **arr2;

    void print();

    void print2();

public:
    Records();

    ~Records();

    void balanceSort();

    void timeSort();
};

Records::Records() {
    cout << "Enter the number of the records:\n";
    cin >> count;
    cout << "Enter the contents of each records:\n";
    arr = new double *[count];
    arr2 = new double *[count];
    for (int i = 0; i < count; ++i) {
        arr[i] = new double[3];
        arr2[i] = new double[3];
        cin >> arr[i][0] >> arr[i][1] >> arr[i][2];
        arr2[i][0] = arr[i][0];
        arr2[i][1] = arr[i][1];
        arr2[i][2] = arr[i][2];
    }
}

Records::~Records() {
    for (int i = 0; i < count; ++i) {
        delete[] arr[i];
    }
    delete[] arr;
    for (int i = 0; i < count; ++i) {
        delete[] arr2[i];
    }
    delete[] arr2;
}

void Records::print() {
    for (int i = 0; i < count; ++i) {
        cout << arr[i][0] << ' ' << arr[i][1] << ' ' << arr[i][2] << '\n';
    }
    cout << endl;
}

void Records::print2() {
    for (int i = 0; i < count; ++i) {
        cout << arr2[i][0] << ' ' << arr2[i][1] << ' ' << arr2[i][2] << '\n';
    }
    cout << endl;
}

void Records::balanceSort() {
    for (int i = 0; i < count - 1; ++i) {
        for (int j = 0; j < count - 1 - i; ++j) {
            if (arr[j][2] > arr[j + 1][2]) {
                double *temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    cout << "Sort according to the balance:\n";
    print();
}

void Records::timeSort() {
    for (int i = 0; i < count - 1; ++i) {
        for (int j = 0; j < count - 1 - i; ++j) {
            if (arr2[j][0] > arr2[j + 1][0] || (arr2[j][0] == arr2[j + 1][0] && arr2[j][1] > arr2[j + 1][1])) {
                double *temp = arr2[j];
                arr2[j] = arr2[j + 1];
                arr2[j + 1] = temp;
            }
        }
    }
    cout << "Sort according to the time:\n";
    print2();
}

int main() {
    Records records;
    records.balanceSort();
    records.timeSort();
    return 0;
}