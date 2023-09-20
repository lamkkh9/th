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
    cout<<"co "<<dem<<"lon nhat";

    return 0;
}
