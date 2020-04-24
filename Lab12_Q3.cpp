#include <iostream>

using namespace std;

class Lock {
private:
    int left, right, leftCounter, rightCounter;
    char lastOp;

public:
    Lock(int, int);

    void reset();

    void operate(char, int);

    bool unlock();
};

Lock::Lock(int a, int b) {
    left = a;
    right = b;
    leftCounter = 0;
    rightCounter = 0;
    lastOp = 's';
}

void Lock::reset() {
    leftCounter = 0;
    rightCounter = 0;
    lastOp = 's';
}

void Lock::operate(char c, int i) {
    if (c == 'l') {
        leftCounter += i;
        if (lastOp == 'r') rightCounter = 0;
    } else if (c == 'r') {
        rightCounter += i;
        if (lastOp == 'l') leftCounter = 0;
    }
    lastOp = c;
}

bool Lock::unlock() {
    lastOp = 'u';
    return leftCounter == left && rightCounter == right;
}

int main() {
    int l, r;
    cout << "Enter the value for the left counter:\n";
    cin >> l;
    cout << "Enter the value for the right counter:\n";
    cin >> r;
    Lock lock(l, r);
    char op;
    int count;
    while (true) {
        cout << "Enter the operation:\n";
        cin >> op;
        if (op == 'e') {
            cout << "Program terminate!\n";
            break;
        } else if (op == 's') {
            lock.reset();
        } else if (op == 'u') {
            if (lock.unlock()) {
                cout << "Successful!\n";
                break;
            }
            cout << "Failed!\n";
        } else {
            cin >> count;
            lock.operate(op, count);
        }
    }
    return 0;
}