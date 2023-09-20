#include <iostream>
using namespace std;

int main() {
	int m,dem,ltb,svt;
	float num[100];
	// nhap so sinh vien trong lop
    cout <<"Co bao nhieu sinh vien trong lop :";
    cin>>m;
    
    // nhap diem cua tung sinh vien
    for(int i=0;i<m;i++){
    	cout << "Nhap diem hoa cua sinh vien so  " << i + 1 << ": ";
        cin >> num[i];
	}
	
	// tinh diem trung binh cua lop
	double tb = 0;
	for(int i=0;i<m;i++){
		tb = tb+num[i];
	}
	tb= tb/m;
	
	// kiem tra co bao nhieu sinh vien co diem duoi 5 va tren trung binh cua lop va tim diem cao nhat
	double max=num[0];
	dem=1;
	ltb=0;
	svt =0;
	for(int i=0;i<m;i++){
		if(num[i]<5){
			svt++;
		}
		if(num[i]>tb){
			ltb++;
		}
		if(num[i]>max){
        	max=num[i];
        	dem=1;
		}
		for (int j = i+1; j < m; j++) {
	        if(num[i]>=num[j]){
	        	double tg = num[i];
	        	num[i]=num[j];
	        	num[j]=tg;
				}
		}
		
	}
	// 
	
	

	cout<<"So sinh vien tren diem trung binh lop :"<<ltb<<endl;
	
	cout<<"so hoc sinh truot mon hoa :"<<svt<<endl;
	
	cout<<"Diem hoa cao nhat lop la :"<<max<<endl;

	cout<<"Day so sau xap xep la :";
    for (int i = 0; i < m; i++) {
        cout <<num[i]<<" ";
    }
	
    return 0;
}
