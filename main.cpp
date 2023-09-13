#include <iostream>
using namespace std;

int main() {
    float num[30];
    float max, min, x;
    int i, n;

    cout << "So luong so can kiem tra: ";
    cin >> n;

    for (i = 0; i < n; i++) {
        cout << "Nhap so thu " << i + 1 << ": ";
        cin >> num[i];
    }
    cout<<"cac so da nhap :";
    for (i = 0; i < n; i++) {
        cout <<num[i]<<" ";
        x=x+num[i];
    }
    cout<<"Tong day so da nhap :"<<x,,endl;
    cout<<"Trung binh cong day so da nhap :"<<x/n<<endl;

    return 0;
}
