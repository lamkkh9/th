#include <iostream>
using namespace std;

int main() {
    int main() {
	int n;
	float num[100];
    cout <<"Co bao nhieu sinh vien trong lop :";
    cin>>n;
    for(int i=0;i<n;i++){
    	cout << "Nhap diem cua sinh vien so  " << i + 1 << ": ";
        cin >> num[i];
	}
	double tb = 0;
	for(int i=0;i<n;i++){
		tb = tb+num[i];
	}
	tb= tb/n;
	int ltb=0;
	int svt =0;
	for(int i=0;i<n;i++){
		if(num[i]<5){
			svt++;
		}
		if(num[i]>tb){
			ltb++;
		}
	}
	double max=num[0];
	int dem=1;
    for (int i = 0; i < n; i++) {
        if(num[i]>max){
        	max=num[i];
        	dem=1;
		}else if(num[i]==max){
			dem++;
		}
    }
	
	cout<<"Diem trung binh lop :"<<tb<<endl;
	cout<<"So sinh vien tren diem trung binh lop :"<<ltb<<endl;
	cout<<"so hoc sinh duoi 5 diem :"<<svt<<endl;
	cout<<"Diem cao nhat la :"<<max<<endl;
	cout<<"So nguoi co diem cao nhat la :"<<dem<<endl;

	
    return 0;
}
}
