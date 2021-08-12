#include <iostream>
#include <string>
using namespace std;
int main()
{
    string name;
    double math, literature;
    double avg;
    cout << "Nhap ho va ten hoc sinh: " << endl;
    getline(cin, name);
    cout << "Nhap diem toan: " << endl;
    cin >> math;
    while(math < 0 || math > 10)
    {
        cout << "Diem toan khong hop le, moi nhap lai: " << endl;
        cin >> math;
    }
    cout << "Nhap diem van: " << endl;
    cin >> literature;
    while(literature < 0 || literature > 10)
    {
        cout << "Diem van khong hop le, moi nhap lai: " << endl;
        cin >> literature;
    }
    avg = (math + literature) / 2;
    cout << "Diem trung binh cua " << name << " la: " << avg << endl;
}