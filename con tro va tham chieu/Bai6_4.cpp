#include <iostream>

using namespace std;

int main() {
    int n;
    if (!(cin >> n) || n <= 0) {
        return 0;
    }

    int *a = new int[n];
    for (int *p = a; p < a + n; ++p) {
        cin >> *p;
    }

    int *pMax = a;
    for (int *p = a + 1; p < a + n; ++p) {
        if (*p > *pMax) {
            pMax = p;
        }
    }

    cout << *pMax << endl;

    delete[] a;
    return 0;
}
