#include <iostream>

using namespace std;

class Record {
private:
    int month, day;
    double balance;

public:
    Record();

    void setData(int, int, double);

    double getBalance();

    void print();

    friend bool compare(Record, Record);

};

Record::Record() {
    month = 0;
    day = 0;
    balance = 0.0;
}

void Record::setData(int m, int d, double b) {
    month = m;
    day = d;
    balance = b;
}

double Record::getBalance() {
    return balance;
}

void Record::print() {
    cout << month << ' ' << day << ' ' << balance << endl;
}

bool compare(Record r1, Record r2) {
    return r1.month > r2.month || (r1.month == r2.month && r1.day > r2.day);
}

int main() {
    int num;
    cout << "Enter the number of the records:\n";
    cin >> num;
    Record *records = new Record[num];
    cout << "Enter the contents of each records:\n";
    for (int i = 0; i < num; ++i) {
        int m, d;
        double b;
        cin >> m >> d >> b;
        records[i].setData(m, d, b);
    }
    for (int j = 0; j < num - 1; ++j) {
        for (int k = 0; k < num - 1 - j; ++k) {
            if (records[k].getBalance() > records[k + 1].getBalance()) {
                Record temp = records[k];
                records[k] = records[k + 1];
                records[k + 1] = temp;
            }
        }
    }
    double target;
    cout << "Enter the balance to find:\n";
    cin >> target;
    bool hasFound = true;
    Record *foundRecords = new Record[num];
    int i;
    for (i = 0; hasFound; ++i) {
        int low = 0, high = num - i, mid = (low + high) / 2;
        while (target != records[mid].getBalance() && high >= low && low < num - i) {
            if (target > records[mid].getBalance()) low = mid + 1;
            else high = mid - 1;
            mid = (low + high) / 2;
        }
        if (high < low || low >= num - i) hasFound = false;
        else {
            foundRecords[i] = records[mid];
            for (int j = mid; j < num - 1 - i; ++j) {
                records[j] = records[j + 1];
            }
        }
    }
    if (i > 1) {
        cout << i - 1 << (i > 2 ? " records" : " record") << " found!\n";
        for (int j = 0; j < i - 2; ++j) {
            for (int k = 0; k < i - 2 - j; ++k) {
                if (compare(foundRecords[k], foundRecords[k + 1])) {
                    Record temp = foundRecords[k];
                    foundRecords[k] = foundRecords[k + 1];
                    foundRecords[k + 1] = temp;
                }
            }
        }
        for (int l = 0; l < i - 1; ++l) {
            foundRecords[l].print();
        }
    } else {
        cout << "No records found!\n";
    }
    delete[] records;
    delete[] foundRecords;
    return 0;
}