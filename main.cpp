#include <iostream>
using namespace std;

void cau1(float s[], int n)
{
    float highest = s[0];
    float lowest = s[0];
    int countExcellent = 0;

    for (int i = 1; i < n; i++)
    {
        if (s[i] > highest)
        {
            highest = s[i];
        }

        if (s[i] < lowest)
        {
            lowest = s[i];
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (s[i] >= 9.0)
        {
            countExcellent++;
        }
    }

    cout << "Highest score: " << highest << endl;
    cout << "Lowest score: " << lowest << endl;
    cout << "So hoc sinh xuat sac: " << countExcellent << endl;
}

int main() {
    int n;
    float s[50];

    cout << "Nhap n: ";
    cin >> n;

    if (n < 2 || n > 20)
    {
        cout << "So luong hoc sinh khong phu hop";
        return 0;
    }
    else
    {
        cout << "So luong hoc sinh phu hop"
             << endl;
    }

    for (int i = 0; i < n; i++)
    {
        cout << "So diem hoc sinh "
             << i + 1 << ": ";

        cin >> s[i];

        while (s[i] < 0 || s[i] > 10)
        {
            cout << "Diem khong phu hop, "
                 << "nhap lai tu 0 den 10: ";

            cin >> s[i];
        }
    }

    cout << "\n DIEM HOC SINH \n";

    for (int i = 0; i < n; i++)
    {
        cout << "Hoc sinh "
             << i + 1 << ": "
             << s[i] << endl;
    }

    cout << "\n CAU 1 \n";
    cau1(s, n);

    /*int hs = 0;
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


//phan 9
    int streak = 0;
    int longest = 0;
    for(int i = 0; i < n; i++){
       if(s[i] > 5){
        streak++;
        if(streak > longest){
            longest = streak;
        }
        else{
            streak = 0;
        }
       }
    }
    cout << "chuoi hoc sinh dat tu 5 tro len dai nhat: " << longest << endl;

//phan 10
    int num1 = 0;
    int num2 = 0;
    int num3 = 0;
    int num4 = 0;
    int num5 = 0;
    
    for(int i = 0; i < n; i++){
        if(s[i] >= 0 && s[i] < 5){
            num1++;
        }
        else if(s[i] >= 5 && s[i] < 6.5){
            num2++;
        }
        else if(s[i] >= 6.5 && s[i] < 8){
            num3++;
        }
        else if(s[i] >= 8 && s[i] < 9){
            num4++;
        }
        else if(s[i] >= 9 && s[i] <= 10){
            num5++;
        }
    }

    cout << "Tu 0 den <5: " << num1 << endl;
    cout << "Tu 5 den <6.5: " << num2 << endl;
    cout << "Tu 6.5 den <8: " << num3 << endl;
    cout << "Tu 8 den <9: " << num4 << endl;
    cout << "Tu 9 den 10: " << num5 << endl;*/

    return 0;
}