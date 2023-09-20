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
    
    for (int i = 0; i < n-1; i++) {
    	for (int j = i+1; j < n; j++) {
	        if(num[i]>num[j]){
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
