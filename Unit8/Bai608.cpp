#include <string>
#include <iostream>
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
        break;
    case 4: case 6: case 9: case 11:
        return 30;
        break;
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
        if (date.month < 1 || date.month > 12)
        {
            cout << "Thang khong hop le. Vui long nhap lai.";
        }
    } while (date.month < 1 || date.month > 12);
    do
    {
        cout << "Nhap ngay: ";
        cin >> date.day;
        if (date.day < 0 || date.day > FindDayOfMonth(date))
        {
            cout << "Ngay khong hop le. Vui long nhap lai.";
        }
    } while (date.day < 0 || date.day > FindDayOfMonth(date));
}
void OutputDate(Date date)
{
    cout << date.day << "/" << date.month << "/" << date.year << endl;
}
struct MilkBottle
{
    string name;
    float weight;
    Date expiredDate;
};
void Input(MilkBottle& mb)
{
    cout << "Nhap ten hop sua: ";
    getline(cin, mb.name);
    cout << "Nhap trong luong: ";
    cin >> mb.weight;
    cout << "Nhap han su dung: " << endl;
    InputDate(mb.expiredDate);
}
void Output(MilkBottle mb)
{
    cout << "Ten hop sua: " << mb.name << endl;
    cout << "Trong luong cua hop sua: " << mb.weight << " kg" << endl;
    cout << "Han su dung: ";
    OutputDate(mb.expiredDate);
}
int main()
{
    
}