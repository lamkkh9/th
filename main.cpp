#include <iostream>
using namespace std;

int main() {
    float num[30];
    int n;

    cout << "So luong so can kiem tra: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Nhap so thu " << i + 1 << ": ";
        cin >> num[i];
    }

    for (int i = 0; i < n; i++) {
        cout << "SO " << num[i] << " la ";
        if (static_cast<int>(num[i]) % 2 == 0) {
            cout << "Chan" << endl;
        } else {
            cout << "Le" << endl;
        }
    }

    return 0;
}
