#include <iostream>
#include <math.h>
using namespace std;
struct DonThuc
{
    int a;
    int n;
};
void Input(DonThuc& dt)
{
    cout << "Nhap he so: ";
    cin >> dt.a;
    cout << "Nhap bac don thuc: ";
    cin >> dt.n;
}
void Output(DonThuc dt)
{
    cout << dt.a << "*x^" << dt.n << endl;
}
DonThuc Nhan2DonThuc(DonThuc dt1, DonThuc dt2)
{
    DonThuc temp;
    temp.a = dt1.a * dt2.a;
    temp.n = dt1.n + dt2.n;

    return temp;
}
DonThuc DaoHamCap1(DonThuc dt)
{
    DonThuc temp;
    temp.a = dt.a * dt.n;
    temp.n = dt.n - 1;

    return temp;
}
DonThuc Chia2DonThuc(DonThuc dt1, DonThuc dt2)
{
    DonThuc temp;
    temp.a = dt1.a / dt2.a;
    temp.n = dt1.n - dt2.n;

    return temp;
}
DonThuc TinhDaoHamCapk(DonThuc dt, int k)
{
    while(k != 0)
    {
        dt = DaoHamCap1(dt);
        k--;
    }
    return dt;
}
double TinhGiaTriDonThuc(DonThuc dt, int x)
{
    return dt.a * pow((double)x, dt.n);
}
DonThuc operator * (DonThuc dt1, DonThuc dt2)
{
    DonThuc temp;
    temp.a = dt1.a * dt2.a;
    temp.n = dt1.n + dt2.n;

    return temp;
}
DonThuc operator / (DonThuc dt1, DonThuc dt2)
{
    DonThuc temp;
    temp.a = dt1.a / dt2.a;
    temp.n = dt1.n - dt2.n;

    return temp;
}
int main()
{
    DonThuc dt;
    Input(dt);
    dt = DaoHamCap1(dt);
    Output(dt);
}
