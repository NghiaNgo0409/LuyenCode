#include <iostream>
using namespace std;
bool CheckLeapYear(int n)
{
    return ((n % 400 == 0) || ((n % 100 != 0) && (n % 4 == 0)));
}
int main()
{
    int month, year;
    cout << "Nhap thang: " << endl;
    cin >> month;
    while(month > 12)
    {
        cout << "Thang khong hop le, moi nhap lai: " << endl;
        cin >> month;
    }
    cout << "Nhap nam: " << endl;
    cin >> year;
    switch (month)
        {
        case 1:
        case 3:
        case 5:
        case 7:
        case 9:
        case 11:
            cout << "Thang co 31 ngay" << endl;
            break;
        case 4:
        case 6:
        case 8:
        case 10:
        case 12:
            cout << "Thang co 30 ngay" << endl;
            break;
        default:
            if (CheckLeapYear(year))
            {
                cout << "Thang co 29 ngay" << endl;
            }
            else
            {
                cout << "Thang co 28 ngay" << endl;
            }
            break;
        }
}