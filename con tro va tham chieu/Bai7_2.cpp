#include <iostream>

using namespace std;

void nhanDoi(int *a, int n) {
    for (int *p = a; p < a + n; ++p) {
        *p *= 2;
    }
}

int main() {
    int a[4] = {3, 6, 9, 12};

    nhanDoi(a, 4);

    for (int *p = a; p < a + 4; ++p) {
        cout << *p << " ";
    }
    cout << endl;

    return 0;
}
