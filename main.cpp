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


void cau2(float s[], int n)
{
    int a, b;
    int hs = 0;

    cout << "\nNhap a: ";
    cin >> a;

    cout << "Nhap b: ";
    cin >> b;

    for (int i = 0; i < n; i++)
    {
        if (s[i] >= a && s[i] <= b)
        {
            hs++;
        }
    }

    cout << "Tong so hoc sinh co diem tu a den b la: "
         << hs << endl;
}

void cau3(float s[], int n)
{
    float average;
    float t = 0;

    for (int i = 0; i < n; i++)
    {
        t += s[i];
    }

    average = t / n;

    cout << "\nDiem trung binh: "
         << average << endl;

    cout << "Hoc sinh co diem tren trung binh:"
         << endl;

    for (int i = 0; i < n; i++)
    {
        if (s[i] > average)
        {
            cout << "Hoc sinh thu "
                 << i + 1 << ": "
                 << s[i] << endl;
        }
    }
}

void cau3(float s[], int n)
{
    float average;
    float t = 0;

    for (int i = 0; i < n; i++)
    {
        t += s[i];
    }

    average = t / n;

    cout << "\nDiem trung binh: "
         << average << endl;

    cout << "Hoc sinh co diem tren trung binh:"
         << endl;

    for (int i = 0; i < n; i++)
    {
        if (s[i] > average)
        {
            cout << "Hoc sinh thu "
                 << i + 1 << ": "
                 << s[i] << endl;
        }
    }
}


void cau4(float s[], int n)
{
    float highest = s[0];
    float secondhigh = -1;

    for (int i = 1; i < n; i++)
    {
        if (s[i] > highest)
        {
            highest = s[i];
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (s[i] > secondhigh && s[i] < highest)
        {
            secondhigh = s[i];
        }
    }

    cout << "\nDiem cao thu hai la: "
         << secondhigh << endl;
}

void cau5(float s[], int n)
{
    float diem;

    cout << "\nNhap mot diem so: ";
    cin >> diem;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == diem)
        {
            cout << "Hoc sinh thu "
                 << i + 1 << endl;
        }
    }
}

void cau6(float s[], int n)
{
    float x;
    int dem = 0;

    cout << "\nNhap diem x: ";
    cin >> x;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == x)
        {
            dem++;
        }
    }

    cout << "So " << x
         << " xuat hien "
         << dem << " lan" << endl;
}

void cau7(float s[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (s[i] < 5)
        {
            cout << "\nHoc sinh dau tien rot" << endl;

            cout << "Hoc sinh thu "
                 << i + 1
                 << " co diem duoi 5 la: "
                 << s[i] << endl;

            break;
        }
    }
}

void cau8(float s[], int n)
{
    cout << "\nSo sanh diem cac hoc sinh:"
         << endl;

    for (int i = 0; i < n - 1; i++)
    {
        if (s[i + 1] > s[i])
        {
            cout << "Hoc sinh " << i + 2
                 << " diem cao hon hoc sinh "
                 << i + 1 << endl;
        }
    }
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

    cout << "\n CAU 2 \n";
    cau2(s, n);

    cout << "\n CAU 3 \n";
    cau3(s, n);

    cout << "\n\ CAU 4 \\n";
    cau4(s, n);

    cout << "\n CAU 5 \n";
    cau5(s, n);

    cout << "\n CAU 6 \n";
    cau6(s, n);

    cout << "\n CAU 7 \n";
    cau7(s, n);

    cout << "\n CAU 8 \n";
    cau8(s, n);







//phan 9
    /*int streak = 0;
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