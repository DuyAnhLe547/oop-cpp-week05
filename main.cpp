#include <iostream>
using namespace std;
int main() {
    int n;
    float a[50];
    cout << "nhap n: ";
    cin >> n;
    if (n <= 2 || n >= 20) {
        cout << "so luong hoc sinh khong phu hop";
    }
    else {
        cout << "so luong hoc sinh phu hop";
    }


    for (int i = 0; i < n; i++) {
        cout << "so diem hoc sinh " << i + 1 << ": ";
        cin >> a[i];
        while (a[i] < 0 || a[i] > 10) {
            cout << "diem khong phu hop, nhap lai tu 0 den 10: ";
            cin >> a[i];
        }
    }
    cout << "\n===== diem hoc sinh =====\n";

    for (int i = 0; i < n; i++) {
        cout << "hoc sinh " << i + 1 << ": " << a[i] << endl;
    }

    return 0;
}