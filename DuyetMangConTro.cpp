#include <iostream>
using namespace std;
int main() {
    int diem[5] = {8, 7, 9, 6, 10};
    int *p = diem;
    cout << "----- DUYET MANG BANG CON TRO -----" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Phan tu " << i << ": " << *p << endl;
        p++;
    }
    int *p2 = diem;
    int tong = 0;
    for (int i = 0; i < 5; i++) {
        tong = tong + *p2;
        p2++;
    }
    cout << "\nTong cac phan tu: " << tong << endl;
    cout << "Trung binh: " << (double)tong / 5 << endl;
    return 0;
}