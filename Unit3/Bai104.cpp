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
int main()
{
    int day, month, year, daysInMonth, s;
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
    s = day;
    for (int i = 1; i < month; i++)
    {
        switch (i)
        {
        case 4: case 6: case 8: case 10: case 12:
            s += 30;
            break;
        case 2:
            s += CheckLeapYear(year) ? 29 : 28;
            break;
        default:
            s += 31;
            break;
        }
    }
    cout << "Ngay nay la ngay thu " << s << " trong nam " << year << endl;
}