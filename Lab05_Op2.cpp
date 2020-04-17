#include <iostream>

using namespace std;

void printEquation(int a, int b, int c) {
    cout << a << " + " << b << " + " << c << " = " << a + b + c << endl;
    cout << a << " + " << b << " - " << c << " = " << a + b - c << endl;
    cout << a << " - " << b << " + " << c << " = " << a - b + c << endl;
    cout << a << " - " << b << " - " << c << " = " << a - b - c << endl;
}

void swap(int &a, int &b) {
    int c = a;
    a = b;
    b = c;
}

int main() {
    cout << "Enter the three input numbers: ";
    int min, mid, max;
    cin >> min >> mid >> max;
    cout << "All permutations are:\n";
    if (mid > max) swap(mid, max);
    if (min > mid) swap(min, mid);
    if (mid > max) swap(mid, max);
    printEquation(min, mid, max);
    printEquation(min, max, mid);
    printEquation(mid, min, max);
    printEquation(mid, max, min);
    printEquation(max, min, mid);
    printEquation(max, mid, min);

    cout<<sizeof("\t\"\128NameAddress\n")<<endl;
    cout<<sizeof("\t\"\182NameAddress\n")<<endl;
    
    return 0;
}