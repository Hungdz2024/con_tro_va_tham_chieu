#include <iostream>

using namespace std;

int* timKiem(int a[], int n, int x) {
    for (int i = 0; i < n; ++i) {
        if (*(a + i) == x) {
            return a + i;
        }
    }
    return nullptr;
}

int main() {
    int a[5] = {10, 20, 30, 40, 50};

    int *res1 = timKiem(a, 5, 30);
    if (res1 != nullptr) {
        cout << *res1 << endl;
    }

    int *res2 = timKiem(a, 5, 99);
    if (res2 != nullptr) {
        cout << *res2 << endl;
    }

    return 0;
}
