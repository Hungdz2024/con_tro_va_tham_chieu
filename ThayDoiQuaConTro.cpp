#include <iostream>
using namespace std;
int main() {
    int tuoi = 20;
    int *p = &tuoi;
    cout << "Truoc khi sua: tuoi = " << tuoi << endl;
    *p = 25;
    cout << "Sau khi sua qua con tro (*p = 25): tuoi = " << tuoi << endl;
    int *pRong = nullptr;
    if (pRong != nullptr) {
        cout << "Gia tri: " << *pRong << endl;
    } else {
        cout << "Con tro pRong dang la nullptr, khong the doc gia tri!" << endl;
    }
    return 0;
}