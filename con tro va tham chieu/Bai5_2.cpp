#include <iostream>

using namespace std;

int main() {
    int a = 10, b = 20;

    int *p = &a;
    cout << *p << endl;
    p = &b;
    cout << *p << endl;

    int &ref = a;
    ref = b;
    cout << ref << endl;
    cout << a << endl;

    int *nullP = nullptr;
    cout << nullP << endl;

    return 0;
}
