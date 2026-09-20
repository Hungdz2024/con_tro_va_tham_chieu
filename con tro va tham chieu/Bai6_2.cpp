#include <iostream>

using namespace std;

int main() {
    int n;
    if (!(cin >> n)) {
        return 0;
    }

    int *a = new int[n];
    for (int *p = a; p < a + n; ++p) {
        cin >> *p;
    }

    int tong = 0;
    for (int *p = a; p < a + n; ++p) {
        tong += *p;
    }

    cout << tong << endl;

    delete[] a;
    return 0;
}
