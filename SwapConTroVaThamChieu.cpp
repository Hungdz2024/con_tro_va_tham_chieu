#include <iostream>
using namespace std;
void swapSai(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}
void swapContro(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
void swapThamChieu(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}
int main() {
    int x1 = 5, y1 = 10;
    cout << "----- swapSai (truyen tham tri) -----" << endl;
    cout << "Truoc: x1 = " << x1 << ", y1 = " << y1 << endl;
    swapSai(x1, y1);
    cout << "Sau (SAI): x1 = " << x1 << ", y1 = " << y1 << endl;
    int x2 = 5, y2 = 10;
    cout << "\n----- swapContro (dung con tro) -----" << endl;
    cout << "Truoc: x2 = " << x2 << ", y2 = " << y2 << endl;
    swapContro(&x2, &y2);
    cout << "Sau: x2 = " << x2 << ", y2 = " << y2 << endl;
    int x3 = 5, y3 = 10;
    cout << "\n----- swapThamChieu (dung tham chieu) -----" << endl;
    cout << "Truoc: x3 = " << x3 << ", y3 = " << y3 << endl;
    swapThamChieu(x3, y3);
    cout << "Sau: x3 = " << x3 << ", y3 = " << y3 << endl;
    return 0;
}