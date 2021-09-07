#include <iostream>
using namespace std;
struct Date
{
    int day;
    int month;
    int year;
};
void Input(Date& d)
{
    cout << "Nhap ngay: ";
    cin >> d.day;
    cout << "Nhap thang: ";
    cin >> d.month;
    cout << "Nhap nam: ";
    cin >> d.year;
}
void Output(Date d)
{
    cout << d.day << "/" << d.month << "/" << d.year << endl; 
}
int main()
{
    Date d;
    Input(d);
    Output(d);
}