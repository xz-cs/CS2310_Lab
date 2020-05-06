#include <iostream>

using namespace std;

int removeMax(int *d, int m) {
    // Find and remove the max value.
    // Logically the removed value is placed at the right hand side of the array.

    int maxPos = 0;
    for (int i = 1; i < m; i++)
        if (d[i] > d[maxPos])
            maxPos = i;

    int max = d[maxPos];
    d[maxPos] = d[m - 1];
    d[m - 1] = max;
    return max;
}

bool removeValue(int *d, int m, int v) {
    // Find and remove the value v from d[].
    // Logically the removed value is placed at the right hand side of the array.

    for (int i = 0; i < m; i++)
        if (d[i] == v) {
            d[i] = d[m - 1];
            d[m - 1] = v;
            return true;
        }
    return false;
}

bool fixPoint(int *x, int n, int left, int right, int *d, int m) {
    if (left > right)  // base case: solution found
        return true;

    int max = removeMax(d, m);
    m--;

    // Option1 : select x[left]
    x[left] = x[n - 1] - max;
    bool success = true;
    int count = 0;
    int i = n - 2;
    while (i >= 0 && success) {
        if (i >= left && i <= right)
            i = left - 1;

        int distance = x[i] - x[left];
        if (distance < 0)
            distance = -distance;
        if (removeValue(d, m - count, distance))
            count++;
        else
            success = false;
        i--;
    }

    if (success)
        success = fixPoint(x, n, left + 1, right, d, m - count);

    // Option 2 : select x[right]
    if (!success) {
        x[right] = max;  // x[0] + max
        success = true;
        count = 0;
        i = 1;
        while (i < n && success) {
            if (i >= left && i <= right)
                i = right + 1;

            int distance = x[i] - x[right];
            if (distance < 0)
                distance = -distance;
            if (removeValue(d, m - count, distance))
                count++;
            else
                success = false;
            i++;
        }
        if (success)
            success = fixPoint(x, n, left, right - 1, d, m - count);
    }
    return success;

}

bool reconstructPoint(int *x, int n, int *d, int m) {
    // Initialize x[0] and x[n-1]
    x[0] = 0;
    int max = removeMax(d, m);
    x[n - 1] = max;

    return fixPoint(x, n, 1, n - 2, d, m - 1);
}

void runFixPoint(int *d, int m) {
    int n;
    for (n = 2; n < m; n++)
        if (n * (n - 1) / 2 == m)
            break;

    cout << "----- Point set reconstruction -----\n";
    cout << "m = " << m << ", n = " << n << endl;
    cout << "d[] : ";
    for (int j = 0; j < m - 1; j++)
        cout << d[j] << ", ";
    cout << d[m - 1] << endl << endl;

    int *x = new int[n];
    if (reconstructPoint(x, n, d, m)) {
        cout << "Solution:\n";
        cout << "x[] : ";
        for (int i = 0; i < n - 1; i++)
            cout << x[i] << ", ";
        cout << x[n - 1] << endl << endl;
    } else
        cout << "No solution.\n\n";

    delete[] x;
}

int main() {

    int d1[] = {2, 3, 4, 5, 6, 9};
    int m1 = 6;
    runFixPoint(d1, m1);

    int d2[] = {2, 2, 4, 5, 10, 8, 3, 7, 6, 3};
    int m2 = 10;
    runFixPoint(d2, m2);

    int d3[] = {2, 2, 4, 5, 10, 8, 3, 7, 6, 5};
    int m3 = 10;
    runFixPoint(d3, m3);

    int d4[] = {6};
    int m4 = 1;
    runFixPoint(d4, m4);

    return 0;
}