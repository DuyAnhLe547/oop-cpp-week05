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
    int hs = 0;
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

    cout << "\nHighest score: " << highest << endl;
    cout << "Lowest score: " << lowest << endl;
    for (int i = 0; i < n; i++) {
        if (s[i] >= 9.0) {
            countExcellent++;
        }
    }

    cout << "so hoc sinh xuat sac: "
    << countExcellent << endl;

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



    return 0;
}