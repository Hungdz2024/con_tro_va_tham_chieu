#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int n;
    if (!(cin >> n) || n <= 0) {
        return 0;
    }

    float *diem = new float[n];
    for (float *p = diem; p < diem + n; ++p) {
        cin >> *p;
    }

    float tong = 0.0f;
    float maxVal = *diem;

    for (float *p = diem; p < diem + n; ++p) {
        tong += *p;
        if (*p > maxVal) {
            maxVal = *p;
        }
    }

    float trungBinh = tong / n;

    cout << tong << endl;
    cout << fixed << setprecision(2) << trungBinh << endl;
    cout << maxVal << endl;

    delete[] diem;
    return 0;
}
