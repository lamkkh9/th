#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cout << "Nhập số lượng mặt hàng: ";
    cin >> n;

    // Khai báo và khởi tạo mảng các mảng 1 chiều cho tên, giá và số lượng
    string Bang_ten[n];
    int Bang_gia[n];
    int Bang_so_luong[n];
    int Bang_gia_tri[n];

    // Nhập thông tin cho từng sản phẩm
    for (int i = 0; i < n; i++) {
        cout << "Nhap ten san pham " << i + 1 << ": ";
        cin >> Bang_ten[i]; // Tên sản phẩm
        cout << "Nhap gia san pham " << i + 1 << ": ";
        cin >> Bang_gia[i]; // Giá sản phẩm
        cout << "Nhap so luong san pham " << i + 1 << ": ";
        cin >> Bang_so_luong[i]; // Số lượng sản phẩm
        Bang_gia_tri[i] = Bang_gia[i] * Bang_so_luong[i];
    }
            for (int i = 0; i < n - 1; i++) {
                for (int j = i + 1; j < n; j++) {
                    if (Bang_gia[j] < Bang_gia[i]) {
                        int tempGia = Bang_gia[i];
                        Bang_gia[i] = Bang_gia[j];
                        Bang_gia[j] = tempGia;
                        string tempTen = Bang_ten[i];
                        Bang_ten[i] = Bang_ten[j];
                        Bang_ten[j] = tempTen;
                        int tempSoLuong = Bang_so_luong[i];
                        Bang_so_luong[i] = Bang_so_luong[j];
                        Bang_so_luong[j] = tempSoLuong;
                    }
                }
            } 
    // Hiển thị thông tin sản phẩm
    cout << "Danh sach san pham:\n";
    for (int i = 0; i < n; i++) {
        cout << "- San pham " << i + 1 << ":\n";
        cout << "+ Ten: " << Bang_ten[i] << endl;
        cout << "+ Gia: " << Bang_gia[i] << endl;
        cout << "+ So luong: " << Bang_so_luong[i] << endl;
        cout << "+ Tong gia tri san pham: " << Bang_gia_tri[i] << endl;
    }

    return 0;
}























#include <iostream>
using namespace std;
int main()
{
    int m, n, i = 0, j = 0, dem_truot;
    cout <<"Nhap so sinh vien n: ";
    cin >> n;
    cout << "Nhap so mon hoc m: ";
    cin >> m;
    char Name[n][100];
    char Mon[n][100];
    float Diem[n][m];
    for(i = 0; i< n; i++)
     {
       cout << "Nhap ten sinh vien thu " << i+1 << ": ";
       cin >> Name[i];
    }
    for(i = 0; i< m; i++)
     {
       cout << "Nhap ten mon hoc so " << i+1 << ": ";
       cin >> Mon[i];
    }
    for(i = 0; i< n; i++)
     {
        for(j = 0; j< m; j++)
         {
            cout << "Nhap diem mon "<< Mon[j] <<" cho sinh vien " << Name[i] << " mon thu " << j+1 << ": ";
            cin >> Diem[i][j];

        }
    }
    int max_truot=0, min_truot=m, sv_min=0, sv_max=0;
    cout << "Bang diem vua nhap la: " << endl;
    for(i = 0; i< n; i++)
        {
            cout<< Name[i] << ":" << endl;
            dem_truot=0;
            for(j = 0; j< m; j++)
              {
             cout << Mon[j] << ":" << Diem[i][j] ;
             if(Diem[i][j] < 4){
                cout<< "(truot)" << "   ";
                dem_truot++;
             }else{
                 cout<< "(do)" << "   ";

             }
             }
            cout << "\nSinh vien nay truot tong cong "<<dem_truot<<" mon"<<endl;
            if(dem_truot<min_truot){
                min_truot = dem_truot;
                sv_min=i;
            }
            if(dem_truot>max_truot){
                max_truot = dem_truot;
                sv_max=i;

            }
    }
    cout<<"Sinh vien truot nhieu nhat la "<< Name[sv_max] << " voi so min truot la :" << max_truot;
    cout<<"\nSinh vien truot it nhat la "<< Name[sv_min]<< " voi so min truot la :" << min_truot;
    return 0;
}










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






