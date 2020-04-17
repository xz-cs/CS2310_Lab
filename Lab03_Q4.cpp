#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

// return a random integer between 1 and 10
int randInt() {
    int a = 1, b = 10;
    return rand() % (b - a + 1) + a;
}

// return a random float number between 0 and 1
double randDouble() {
    return rand() / (double)(RAND_MAX);
}

int main() {
    int num;
    double dou;
    srand((unsigned)time(0));
    switch (randInt()) {
        case 1:
        case 2:
            cout << -3;
            break;
        case 3:
        case 4:
            cout << -2;
            break;
        case 5:
        case 6:
            cout << -1;
            break;
        case 7:
        case 8:
            cout << 0;
            break;
        default:
            cout << 1;
    }
    
    return 0;
}
