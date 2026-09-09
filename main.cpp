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