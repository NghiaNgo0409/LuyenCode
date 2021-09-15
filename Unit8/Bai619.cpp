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
struct Daily
{
    string id;
    string name;
    int phone;
    Date date;
    string address;
    string email;
};
void Input(Daily& dl)
{
    cout << "Nhap ID: ";
    getline(cin, dl.id);
    cout << "Nhap ten: ";
    getline(cin, dl.name);
    cout << "Nhap so dien thoai: ";
    cin >> dl.phone;
    cout << "Nhap ngay tiep nhan: ";
    InputDate(dl.date);
    cout << "Nhap dia chi: ";
    getline(cin, dl.address);
    cout << "Nhap email: ";
    getline(cin, dl.email);
}
void Output(Daily dl)
{
    cout << "ID la: " << dl.id << endl;
    cout << "Ten dai ly: " << dl.name << endl;
    cout << "So dien thoai: " << dl.phone << endl;
    cout << "Ngay tiep nhan: ";
    OutputDate(dl.date);
    cout << "Dia chi: " << dl.address << endl;
    cout << "Email: " << dl.email << endl;
}
int main()
{
    
}

