#include <iostream>

using namespace std;

void timMinMax(int a[], int n, int *min, int *max) {
    *min = *a;
    *max = *a;
    for (int *p = a + 1; p < a + n; ++p) {
        if (*p < *min) *min = *p;
        if (*p > *max) *max = *p;
    }
}

void timMinMaxRef(int a[], int n, int &min, int &max) {
    min = *a;
    max = *a;
    for (int *p = a + 1; p < a + n; ++p) {
        if (*p < min) min = *p;
        if (*p > max) max = *p;
    }
}

int main() {
    int a[5] = {12, 5, 89, -3, 24};
    int min1, max1;

    timMinMax(a, 5, &min1, &max1);
    cout << min1 << " " << max1 << endl;

    int min2, max2;
    timMinMaxRef(a, 5, min2, max2);
    cout << min2 << " " << max2 << endl;

    return 0;
}
