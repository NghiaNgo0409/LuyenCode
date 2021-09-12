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
bool CheckLeapYear(int a)
{
    return (a % 4 == 0 && a % 100 != 0) || (a % 400 == 0); 
}
int FindDayOfMonth(Date date)
{
    int day;
    switch (date.month)
    {
    case 1: case 3: case 5: case 7: case 8: case 10: case 12:
        day = 31;        
        break;
    case 4: case 6: case 9: case 11:
        day = 30;
        break;
    case 2:
        if(CheckLeapYear(date))
        {
            day = 29;
        }
        else
        {
            day = 28;
        }
    }
    return day;
}
void Input(Date& date)
{
    cout << "Nhap nam: ";
    cin >> date.year;
    do
    {
        cout << "Nhap thang: ";
        cin >> date.month;
        if(date.month < 1 || date.month > 12)
        {
            cout << "Thang khong hop le. Vui long nhap lai. ";
        }
    } while (date.month < 1 || date.month > 12);
    int dayOfMonth = FindDayOfMonth(date);
    do
    {
        cout << "Nhap ngay: ";
        cin >> date.day;
        if (date.day < 0 || date.day > dayOfMonth)
        {
            cout << "Ngay khong hop le. Vui long nhap lai. ";
        }
    } while (date.day < 0 || date.day > dayOfMonth);
}
void Output(Date date)
{
    cout << date.day << "/" << date.month << "/" << date.year << endl;
}
int CountOrderDay(Date date)
{
    int s = date.day;
    for(int i = 1; i < date.month; i++)
    {
        switch (i)
        {
        case 4: case 6: case 9: case 11:
            s += 30;
            break;
        case 2: s += (date.year % 4 == 0 && date.year % 100 != 0 || date.year % 400 == 0) ? 29 : 28;
            break;
        default:
            s += 31;
        }
    }
    return s;
}
int CountOrderDayFrom(Date date)
{
    int s = 0;
    for(int i = 1; i < date.year; i++)
    {
        if (CheckLeapYear(i))
        {
            s += 366;
        }
        else 
        {
            s += 365;
        }
    }
    return s + CountOrderDay(date);
}
int FindDateWhenKnowOrder(int year, int s)
{
    int n[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    if (CheckLeapYear(year))
    {
        n[1] = 29;
    }
    for(int i = 0; i < 12; i++)
    {
        if (n[i] < s)
        {
            s -= n[i];
        }
        else
        {
            break;
        }
    }
    return s;
}
int FindDateWhenKnowOrderFrom(int s)
{
    int year = 1;
    while(1)
    {
        if(CheckLeapYear(year))
        {
            if(s > 366)
            {
                s -= 366;
            }
            else
            {
                return FindDateWhenKnowOrder(year, s);
            }
        }
        else
        {
            if(s > 365)
            {
                s -= 365;
            }
            else
            {
                return FindDateWhenKnowOrder(year, s);
            }
        }
        year++;
    }
    return -1;
}
Date FindNextDate(Date date)
{
    int dayOfMonth = FindDayOfMonth(date);
    if(date.day == dayOfMonth && date.month == 12)
    {
        date.day = 1;
        date.month = 1;
        date.year++;
    }
    else if (date.day == dayOfMonth)
    {
        date.day = 1;
        date.month++;
    }
    else
    {
        date.day++;
    }
    return date;
}
Date FindPreviousDate(Date date)
{
    if(date.day == 1 && date.month == 1)
    {
        date.year--;
        date.month = 12;
        date.day = FindDayOfMonth(date);
    }
    else if (date.day == 1)
    {
        date.month--;
        date.day = FindDayOfMonth(date);
    }
    else
    {
        date.day--;
    }
    return date;
}
Date FindNextKDay(Date date, int k)
{
    while(k > 0)
    {
        date = FindNextDate(date);
        k--;
    }
    return date;
}
Date FindPreviousKDate(Date date, int k)
{
    while(k > 0)
    {
        date = FindPreviousDate(date);
        k--;
    }
    return date;
}
int Compare2Date(Date a, Date b)
{
    int sA = CountOrderDay(a);
    int sB = CountOrderDay(b);
    if(sA > sB)
    {
        return 1;
    }
    if(sA < sB)
    {
        return 0;
    }
    return -1;
}
void FindDayInWeekOfRandomDate(Date date)
{
    date.year -= (14 - date.month) / 12;
    date.month += 12 * ((14 - date.month) / 12) - 2;

    int dayOfWeek = (date.day + date.year + date.year / 4 - date.year / 100 + date.year / 400 + (31 * date.month)/12) % 7;

    if (!dayOfWeek)
    {
        cout << "Chu nhat" << endl;
    }
    else
    {
        cout << "Thu " << dayOfWeek + 1 << endl;
    }
}
int main()
{
    
}


