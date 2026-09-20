#include <iostream>

using namespace std;

int main() {
    int a = 15;
    int b = 30;
    int *p = &a;

    cout << *p << endl;

    p = &b;
    cout << *p << endl;

    return 0;
}
