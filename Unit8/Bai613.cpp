#include <iostream>
#include <string>
using namespace std;
struct Date
{
    int day;
    int month;
    int year;
};
bool CheckLeapYear(Date date)
{
    return (date.year % 4 == 0 && date.year % 100 != 0) || (date.year % 400 == 0);
}
int FindDayOfMonth(Date date)
{
    switch (date.month)
    {
    case 1: case 3: case 5: case 7: case 8: case 10: case 12:
        return 31;
    case 4: case 6: case 9: case 11:
        return 30;
    case 2:
        if(CheckLeapYear(date))
        {
            return 29;
        }
        else
        {
            return 28;
        }
    }
}
void InputDate(Date& date)
{
    cout << "Nhap nam: ";
    cin >> date.year;
    do
    {
        cout << "Nhap thang: ";
        cin >> date.month;
        if(date.month < 1 || date.month > 12)
        {
            cout << "Thang khong hop le. Vui long Nhap lai.";
        }
    } while (date.month < 1 || date.month > 12);
    do
    {
        cout << "Nhap ngay: ";
        cin >> date.day;
        if(date.day < 1 || date.day > FindDayOfMonth(date))
        {
            cout << "Ngay khong hop le. Vui long nhap lai. ";
        }
    } while (date.day < 1 || date.day > FindDayOfMonth(date));
}
void OutputDate(Date date)
{
    cout << date.day << "/" << date.month << "/" << date.year << endl;
}
struct CauThu
{
    string id;
    string name;
    Date birthDate;
};
void InputCauThu(CauThu& ct)
{
    cout << "Nhap id: ";
    getline(cin, ct.id);
    cout << "Nhap ten cau thu: ";
    getline(cin, ct.name);
    cout << "Nhap ngay sinh: " << endl;
    InputDate(ct.birthDate);
}
void OutputCauThu(CauThu ct)
{
    cout << "ID cua cau thu: " << ct.id << endl;
    cout << "Ten cua cau thu: " << ct.name << endl;
    cout << "Ngay sinh cua cau thu: ";
    OutputDate(ct.birthDate);
}
struct DoiBong
{
    string id;
    string name;
    int amount;
    CauThu ct[30];
};
void Input(DoiBong& db)
{
    cout << "Nhap id: ";
    getline(cin, db.id);
    cout << "Nhap ten doi bong: ";
    getline(cin, db.name);
    cout << "Nhap so luong cau thu: ";
    cin >> db.amount;
    for(int i = 0; i < db.amount; i++)
    {
        cout << "Nhap thong tin cau thu thu " << i + 1 << " : " << endl;
        InputCauThu(db.ct[i]);
    }
}
void Output(DoiBong db)
{
    cout << "ID cua doi bong: " << db.id << endl;
    cout << "Ten cua doi bong: " << db.name << endl;
    cout << "So luong cau thu: " << db.amount << endl;
    for(int i = 0; i < db.amount; i++)
    {
        cout << "Thong tin cau thu thu " << i + 1 << ": " << endl;
        OutputCauThu(db.ct[i]);
    }
}
int main()
{
    
}