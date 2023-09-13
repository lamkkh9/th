#include <iostream>
using namespace std;

int main() {
    float num[30];
    float max, min, x = 0.0;
    int i, n;

    cout << "So luong so can kiem tra: ";
    cin >> n;

    for (i = 0; i < n; i++) {
        cout << "Nhap so thu " << i + 1 << ": ";
        cin >> num[i];
    }

    cout << "Cac so da nhap: ";
    for (i = 0; i < n; i++) {
        cout << num[i] << " ";
        x = x + num[i];
    }
    
    cout << "\nTong day so da nhap: " << x << endl;
    cout << "Trung binh cong day so da nhap: " << x / static_cast<float>(n) << endl;

    max = num[0];
    min = num[0];
    for (i = 0; i < n; i++) {
        if (num[i] > max) {
            max = num[i];
        }
        if (num[i] < min) {
            min = num[i];
        }
    }

    cout << "Max la: " << max << endl;
    cout << "Min la: " << min << endl;

    return 0;
}
