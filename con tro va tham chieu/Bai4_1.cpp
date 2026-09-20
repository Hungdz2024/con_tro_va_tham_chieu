#include <iostream>

using namespace std;

int main() {
    int x = 5;
    int &ref = x;

    ref = 25;

    cout << x << endl;
    cout << &x << endl;
    cout << &ref << endl;

    return 0;
}
