#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct SinhVien {
    string ten;
    vector<int> diemMonHoc;
};

int main() {
    int n, m;

    cout << "Nhap so sinh vien: ";
    cin >> n;
    cout << "Nhap so mon hoc: ";
    cin >> m;

    vector<SinhVien> danhSachSinhVien(n);

    // Nhập điểm cho từng sinh viên và môn học
    for (int i = 0; i < n; i++) {
        cout << "Nhap ten sinh vien thu " << i + 1 << ": ";
        cin >> danhSachSinhVien[i].ten;

        cout << "Nhap diem cho " << m << " mon hoc cua sinh vien " << danhSachSinhVien[i].ten << ":\n";
        for (int j = 0; j < m; j++) {
            int diem;
            cout << "Mon hoc " << j + 1 << ": ";
            cin >> diem;
            danhSachSinhVien[i].diemMonHoc.push_back(diem);
        }
    }

    // Kiểm tra và hiển thị môn học mà từng sinh viên trượt
    for (int i = 0; i < n; i++) {
        cout << "Sinh vien " << danhSachSinhVien[i].ten << " truot cac mon hoc sau: ";
        for (int j = 0; j < m; j++) {
            if (danhSachSinhVien[i].diemMonHoc[j] < 5) {
                cout << "Mon hoc " << j + 1 << " ";
            }
        }
        cout << endl;
    }

    return 0;
}






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
}h









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





#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{	
	int choice;
	cout<<"1. Shutdown Your Computer \n";
	cout<<"2. Restart Your Computer \n";
	cout<<"\n Enter your choice : ";
	cin>>choice;
	switch(choice)
	{
		case 1 : cout<<"Your system will be shutdown after 20 seconds \n";
			system("c:\\windows\\system32\\shutdown /s /t 20 \n\n");
			break;
		case 2 : cout<<"Your system will be restarted in 20 seconds\n";
			system("c:\\windows\\system32\\shutdown /r /t 20\n\n");
			break;
		default : cout<<"Wrong Choice..!!\n";
	}
	return 0;
} 






