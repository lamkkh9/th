#include <iostream>
#include <string>
using namespace std;

const int MAX_SINHVIEN = 50;
const int MAX_MONHOC = 50;
const int MAX_DIEM = 50;

struct SinhVien {
    string ten;
    string ten_mon;
    float diem[MAX_MONHOC][MAX_DIEM];
    float tb;
};

int main() {
    int n;

    cout << "Nhap so sinh vien: ";
    cin >> n;
    cout << endl;

    SinhVien sv[MAX_SINHVIEN];

    int m, l;

    cout << "Nhap so mon hoc: ";
    cin >> m;

    cout << "Nhap so dau diem cua tung mon: ";
    cin >> l;


    for (int i = 0; i < n; i++) {
        cout << "-Nhap ten sinh vien thu " << i + 1 << ": ";
        cin.ignore();
        getline(cin, sv[i].ten);

        for (int j = 0; j < m; j++) {
            cout << " -Nhap ten mon thu " << j + 1 << ": ";
            cin.ignore();
            getline(cin, sv[i].ten_mon);
            for (int k = 0; k < l; k++) {
                cout << "  -Dau dien thu "<<k+1<<" cua mon "<<sv[i].ten_mon<<" : ";
                cin >> sv[i].diem[j][k];
            }
        }
    }

    float tong;
    for (int i = 0; i < n; i++) {
        tong = 0;
        for (int j = 0; j < m; j++) {
            for (int k = 0; k < l; k++) {
                tong += sv[i].diem[j][k];
            }
        }
        sv[i].tb = tong / ((float)(l * m));
    }


    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (sv[i].tb < sv[j].tb) {
                swap(sv[i], sv[j]);
            }
        }
    }

    cout << "Danh sach sau khi sap xep: " << endl;
    for (int i = 0; i < n; i++) {
        cout << "- STT: " << i+1 << endl;
        cout << "- Ten sinh vien: " << sv[i].ten << endl;
        for (int j = 0; j < m; j++) {
            cout << "- Diem mon " << sv[i].ten_mon << " cua sinh vien nay la: " << endl;
            for (int k = 0; k < l; k++) {
                cout << "\t+ Diem thu "<<k+1<<" : " << sv[i].diem[j][k] << endl;
            }
        }
        cout << "Diem trung binh: " << sv[i].tb << endl;
    }
    cout << endl;

    return 0;
}
