#include <iostream>
using namespace std;

void demmax(){
	float num[30];
    int n;

    cout << "So luong so can kiem tra: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Nhap so thu " << i + 1 << ": ";
        cin >> num[i];
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
    cout<<"so lon nhat la :"<<max;
    cout<<"co "<<dem<<"lon nhat";
}

int main() {
    float num[30];
    int n;

    cout << "So luong so can kiem tra: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Nhap so thu " << i + 1 << ": ";
        cin >> num[i];
    }
    
    for (int i = 0; i < n-1; i++) {
    	for (int j = i+1; j < n; j++) {
	        if(num[i]<num[j]){
	        	double tg = num[i];
	        	num[i]=num[j];
	        	num[j]=tg;
			}
		}
    }
    for (int i = 0; i < n; i++) {
        cout << num[i]<<" ";
    }
    return 0;
}
