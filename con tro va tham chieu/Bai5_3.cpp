#include <iostream>

using namespace std;

void hoanDoi(int &x, int &y) {
    int temp = x;
    x = y;
    y = temp;
}

int* timKiem(int *arr, int n, int val) {
    for (int i = 0; i < n; ++i) {
        if (*(arr + i) == val) {
            return arr + i;
        }
    }
    return nullptr;
}

int main() {
    int x = 1, y = 2;
    hoanDoi(x, y);
    cout << x << " " << y << endl;

    int arr[3] = {10, 20, 30};
    int *res = timKiem(arr, 3, 20);
    if (res) {
        cout << *res << endl;
    }

    int *dynArr = new int[3]{5, 10, 15};
    for (int *p = dynArr; p < dynArr + 3; ++p) {
        cout << *p << " ";
    }
    cout << endl;
    delete[] dynArr;

    return 0;
}
