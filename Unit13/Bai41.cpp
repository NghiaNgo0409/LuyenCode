#include <iostream>
using namespace std;
void func(int& h, int& m, int& s, int x)
{
    s += x;
    while(s >= 60)
    {
        ++m;
        s -= 60;
    }
    while(m >= 60)
    {
        ++h;
        m -= 60;
    }
    while(h >= 12)
    {
        h -= 12;
    }
}
int main()
{
    int hour, minute, second, x;
    cout << "Nhap gio: "; cin >> hour;
    cout << "Nhap phut: "; cin >> minute;
    cout << "Nhap giay: "; cin >> second;
    cout << "Nhap x: "; cin >> x;
    func(hour, minute, second, x);
    cout << hour << " : " << minute << " : " << second << endl;
}