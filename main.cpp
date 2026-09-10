#include <iostream>
using namespace std;
int main() {
    int n;
    float s[50];
    int passed = 0;
    int failed = 0;
    float highest = s[0];
    float lowest = s[0];
    int countExcellent = 0;
    int a, b;
    cout << "nhap n: ";
    cin >> n;
    if (n <= 2 || n >= 20) {
        cout << "so luong hoc sinh khong phu hop";
    }
    else {
        cout << "so luong hoc sinh phu hop" << endl;
    }


    for (int i = 0; i < n; i++) {
        cout << "so diem hoc sinh " << i + 1 << ": ";
        cin >> s[i];
        while (s[i] < 0 || s[i] > 10) {
            cout << "diem khong phu hop, nhap lai tu 0 den 10: ";
            cin >> s[i];
        }
    }
    cout << "\n===== diem hoc sinh =====\n";

    for (int i = 0; i < n; i++) {
        cout << "hoc sinh " << i + 1 << ": " << s[i] << endl;
    }

    cout << "\n===== RESULTS =====\n";

    for (int i = 0; i < n; i++) {
        if (s[i] >= 5) {
            cout << "hoc sinh " << i + 1 << ": "
                << s[i] << " PASS\n";
        }
        else {
            cout << "hoc sinh " << i + 1 << ": "
                << s[i] << " FAIL\n";
        }
    }


    for (int i = 0; i < n; i++) {
        if (s[i] >= 5) {
            passed++;
        }
        else {
            failed++;
        }
    }

    float passRate = (float)passed / n * 100;

    cout << "\n===== STATISTICS =====\n";
    cout << "Passed : " << passed << " students\n";
    cout << "Failed : " << failed << " students\n";
    cout << "Pass rate: " << passRate << "%\n";



    for (int i = 1; i < n; i++) {
        if (s[i] > highest) {
            highest = s[i];
        }

        if (s[i] < lowest) {
            lowest = s[i];
        }
    }

    cout << "\n===== CLASSIFICATION =====\n";

    for (int i = 0; i < n; i++) {
        cout << "Student " << i + 1 << ": " << s[i] << " -> ";

        if (s[i] >= 9) {
            cout << "Excellent";
        }
        else if (s[i] >= 8) {
            cout << "Very Good";
        }
        else if (s[i] >= 6.5) {
            cout << "Good";
        }
        else if (s[i] >= 5) {
            cout << "Average";
        }
        else {
            cout << "Fail";
        }

        cout << endl;
    }


//phan 1
    cout << "\nHighest score: " << highest << endl;
    cout << "Lowest score: " << lowest << endl;
    for (int i = 0; i < n; i++) {
        if (s[i] >= 9.0) {
            countExcellent++;
        }
    }

    cout << "so hoc sinh xuat sac: "
    << countExcellent << endl;

//phan 2
    int hs = 0;
    cout << "nhap a: ";
    cin >> a;
    cout << "nhap b: ";
    cin >> b;
    for(int i = 0; i < n;i++){
        if(s[i] >= a && s[i] <= b){
            hs++;
        }
    }
    cout << "tong so hoc sinh co diem tu a den b la: " << hs;

//phan 3
    float average;
    int t = 0;
    for(int i = 0; i < n; i++){
        t += s[i];
    }
    average = (float)t / n;

    cout << "hoc sinh co diem so tren trung binh"<< endl;
    for(int i = 0; i < n; i++){
        if(s[i] > average){
            cout << "hoc sinh thu" << i + 1 << ": " << s[i] << endl;
        }
    }


//phan 4
    int secondhigh = 0;
    for(int i = 0; i < n; i++){
        if(s[i] > secondhigh && s[i] < highest){
            secondhigh = s[i];
        }
    }
    cout << "hoc sinh co diem so cao thu hai la: " << secondhigh << endl;

//phan 5
    float diem;
    cout << " nhap mot diem so: " << endl;
    cin >> diem;
    for(int i = 0; i < n; i++){
        if(s[i] == diem){
            cout << "hoc sinh thu: " << i + 1 << endl;
        }
    }

//phan 6 
    float x;
    int dem = 0;
    cout << " nhap diem x: " << endl;
    cin >> x;
    for(int i = 0; i < n; i++){
        if(s[i] == x){
            dem++;
        }
    }
    cout << "so " << x << "xuat hien " << dem << endl;

//phan 7
    for(int i = 0; i < n; i++){
        if(s[i] < 5){
            cout << "hoc sinh dau tien rot" << endl;
            cout << "hoc sinh thu " << i + 1 << " co diem duoi 5 la: " << s[i] << endl;
            break;
        }
    }

//phan 8
    for(int i = 0; i < n - 1; i++){
        if(s[i + 1] > s[i]){
            cout << "hoc sinh " << i + 2 << " diem cao hơn " << i + 1 << endl;
        }
    }

    return 0;
}