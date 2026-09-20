#include <iostream>

using namespace std;

void tang1(int *p) {
    if (p != nullptr) {
        (*p)++;
    }
}

void tang2(int &n) {
    n++;
}

int main() {
    int a = 10;
    int b = 10;

    tang1(&a);
    cout << a << endl;

    tang2(b);
    cout << b << endl;

    return 0;
}
