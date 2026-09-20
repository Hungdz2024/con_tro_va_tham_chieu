#include <iostream>

using namespace std;

int main() {
    int *p = nullptr;

    if (p != nullptr) {
        cout << *p << endl;
    } else {
        cout << 0 << endl;
    }

    return 0;
}
