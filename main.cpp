#include <iostream>
using namespace std;

struct Danh_Sach {
    double so_a;
    double so_b;
    double hieu;
    double tong;
    double nhan;
};

double Tong(double a, double b) {
    return a + b;
}

double Hieu(double a, double b) {
    return a - b;
}

double Nhan(double a, double b) {
    return a * b;
}

void hien_thi (){
	for (int j = 0; j < i; j++) {
        cout << "Cap so thu " << j + 1 << " :" << endl;
        cout << ds[j].so_a << " + " << ds[j].so_b << " = " << ds[j].tong << endl;
        cout << ds[j].so_a << " - " << ds[j].so_b << " = " << ds[j].hieu << endl;
        cout << ds[j].so_a << " x " << ds[j].so_b << " = " << ds[j].nhan << endl;
    }
}
int main()
{	
    Danh_Sach ds[1000];
    int i = 0;

    while (true) {
        cout << "Nhap gia tri cua a: ";
        cin >> ds[i].so_a;
        if (!(ds[i].so_a) == false) {
		
	        cout << "Nhap gia tri cua b: ";
	        cin >> ds[i].so_b;
	
	        ds[i].tong = Tong(ds[i].so_a, ds[i].so_b);
	        ds[i].hieu = Hieu(ds[i].so_a, ds[i].so_b);
	        ds[i].nhan = Nhan(ds[i].so_a, ds[i].so_b);
	
	        i++;
		}else{
			break;
		}
    }

    

    return 0;
}
