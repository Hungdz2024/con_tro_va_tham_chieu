#include <iostream>

using namespace std;

void swapByPointer(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void swapByReference(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 5, y = 10;

    swapByPointer(&x, &y);
    cout << x << " " << y << endl;

    swapByReference(x, y);
    cout << x << " " << y << endl;

    return 0;
}
