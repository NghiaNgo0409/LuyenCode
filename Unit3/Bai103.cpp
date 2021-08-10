#include <iostream>
using namespace std;
bool CheckLeapYear(int n)
{
    return ((n % 400 == 0) || ((n % 100 != 0) && (n % 4 == 0)));
}
int DaysInMonth(int m, int y)
{
    switch (m)
        {
        case 1:
        case 3:
        case 5:
        case 7:
        case 9:
        case 11:
            return 31;
        case 4:
        case 6:
        case 8:
        case 10:
        case 12:
            return 30;
        default:
            if (CheckLeapYear(y))
            {
                return 29;
            }
            else
            {
                return 28;
            }
        }
}
void FindPreviousDay(int d, int m, int y)
{
    if (d == 1 && m == 1)
    {
        d = 31;
        m = 12;
        y--;
    }
    else if (d == 1)
    {
        m--;
        d = DaysInMonth(m,y);
    }
    else
    {
        d--;
    }
    cout << d << "/" << m << "/" << y << endl;
}
int main()
{
    int day, month, year, daysInMonth;
    cout << "Nhap nam: " << endl;
    cin >> year;
    cout << "Nhap thang:" << endl;
    cin >> month;
    while(month > 12)
    {
        cout << "Thang khong hop le, moi nhap lai: " << endl;
        cin >> month;
    }
    daysInMonth = DaysInMonth(month, year);
    cout << "Nhap ngay: " << endl;
    cin >> day;
    while(day <= 0 || day > daysInMonth)
    {
        cout << "Ngay khong hop le, moi nhap lai: " << endl;
        cin >> day;
    }
    FindPreviousDay(day,month,year);
}