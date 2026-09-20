#include <iostream>

using namespace std;

void tangGap3(int &n) {
    n *= 3;
}

int main() {
    int val = 7;

    tangGap3(val);

    cout << val << endl;

    return 0;
}
