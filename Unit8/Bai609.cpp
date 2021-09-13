#include <iostream>
#include <string>
using namespace std;
struct Time
{
    int hour;
    int minute;
};
void InputTime(Time& t)
{
    do
    {
        cout << "Nhap gio: ";
        cin >> t.hour;
        if (t.hour < 0 || t.hour > 23)
        {
            cout << "Gio khong hop le. Vui long nhap lai.";
        }
    } while (t.hour < 0 || t.hour > 23);
    
    do
    {
        cout << "Nhap phut: ";
        cin >> t.minute;
        if(t.minute < 0 || t.minute > 59)
        {
            cout << "Phut khong hop le. Vui long nhap lai.";
        }
    } while (t.minute < 0 || t.minute > 59);
}
void OutputTime(Time t)
{
    cout << t.hour << ":" << t.minute << endl;
}
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
struct Ticket
{
    string name;
    int price;
    Time time;
    Date date;
};
void Input(Ticket& tk)
{
    cout << "Nhap ten phim: ";
    getline(cin, tk.name);
    cout << "Nhap gia tien: ";
    cin >> tk.price;
    cout << "Nhap xuat chieu: " << endl;
    InputTime(tk.time);
    cout << "Nhap ngay xem: " << endl;
    InputDate(tk.date);
}
void Output(Ticket tk)
{
    cout << "Ten phim: " << tk.name << endl;
    cout << "Gia tien: " << tk.price << " VND" << endl;
    cout << "Xuat chieu luc: ";
    OutputTime(tk.time);
    cout << "Ngay xem la ngay: ";
    OutputDate(tk.date);
}
int main()
{
    
}
