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
            cout << "Thang khong hop le. Vui long nhap lai.";
        }
    } while (date.month < 1 || date.month > 12);
    do
    {
        cout << "Nhap ngay: ";
        cin >> date.day;
        if(date.day < 1 || date.day > FindDayOfMonth(date))
        {
            cout << "Ngay khong hop le. Vui long nhap lai.";
        }
    } while (date.day < 1 || date.day > FindDayOfMonth(date));
}
void OutputDate(Date date)
{
    cout << date.day << "/" << date.month << "/" << date.year << endl;
}
struct SoTietKiem
{
    string id;
    string type;
    string customer;
    int identification;
    Date date;
    float money;
};
void Input(SoTietKiem& stk)
{
    cout << "Nhap ma so: ";
    getline(cin, stk.id);
    cout << "Nhap loai tiet kiem: ";
    getline(cin, stk.type);
    cout << "Ho ten khach hang: ";
    getline(cin, stk.customer);
    cout << "Nhap ma so CMND: ";
    cin >> stk.identification;
    cout << "Nhap ngay mo so: " << endl;
    InputDate(stk.date);
    cout << "Nhap so tien gui: ";
    cin >> stk.money;
}
void Output(SoTietKiem stk)
{
    cout << "Ma so: " << stk.id << endl;
    cout << "Loai tiet kiem: " << stk.type << endl;
    cout << "Ho ten khach hang: " << stk.customer << endl;
    cout << "Ma so CMND: " << stk.identification << endl;
    cout << "Ngay mo so: ";
    OutputDate(stk.date);
    cout << "So tien gui: " << stk.money << endl;
}
int main()
{
    
}