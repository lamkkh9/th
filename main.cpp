#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Định nghĩa cấu trúc SinhVien
struct SinhVien {
    string ten;
    int diem;
};

int main() {
    int m;
    cout << "Co bao nhieu sinh vien trong lop: ";
    cin >> m;

    // Tạo mảng chứa thông tin của từng sinh viên
    vector<SinhVien> danhSachSinhVien(m);
    // Nhập thông tin của từng sinh viên
    for (int i = 0; i < m; i++) {
        cout << "Nhap ten sinh vien thu " << i + 1 << ": ";
        cin >> danhSachSinhVien[i].ten;
        cout << "Nhap diem hoa cua sinh vien thu " << i + 1 << ": ";
        cin >> danhSachSinhVien[i].diem;

    }
    for (int i = 0; i < m; i++) {
        switch (danhSachSinhVien[i].diem) {
            case 0:
            case 1:
            case 2:
            case 3:
            case 4:
                cout << "Ten: " << danhSachSinhVien[i].ten << "- Diem: " << danhSachSinhVien[i].diem << " (Truot)" << endl;

            default:
          cout << "Ten: " << danhSachSinhVien[i].ten << "- Diem: " << danhSachSinhVien[i].diem << " (DO)" << endl;

        }
}

    return 0;
}









#include <iostream>

using namespace std;

int main() {
    int dong, cot;


    cout << "Nhap so dong: ";
    cin >> dong;
    cout << "Nhap so cot: ";
    cin >> cot;


    int mang[100][100];


    for (int i = 0; i < dong; i++) {
        for (int j = 0; j < cot; j++) {
            cout << "Nhap gia tri tai vi tri [" << i << "][" << j << "]: ";
            cin >> mang[i][j];
        }
    }


    int tong = 0;
    for (int i = 0; i < dong; i++) {
        for (int j = 0; j < cot; j++) {
            tong += mang[i][j];
        }
    }

    cout << "Tong cua mang 2 chieu la: " << tong << endl;

    return 0;
}
