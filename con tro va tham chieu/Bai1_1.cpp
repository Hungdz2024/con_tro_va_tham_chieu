#include <iostream>

using namespace std;

int main() {
    int a = 10;
    float b = 3.14f;
    char c = 'Z';

    cout << &a << endl;
    cout << &b << endl;
    cout << (void*)&c << endl;

    return 0;
}
