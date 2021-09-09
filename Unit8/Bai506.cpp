#include <iostream>
using namespace std;
struct PhanSo
{
    int tu;
    int mau;
};
void Input(PhanSo& ps)
{
    cout << "Nhap tu: ";
    cin >> ps.tu;
    do
    {
        cout << "Nhap mau: ";
        cin >> ps.mau;
        if(ps.mau == 0)
        {
            cout << "Mau phai khac 0. Vui long nhap lai. ";
        }
    } while (ps.mau == 0);
}
void Output(PhanSo ps)
{
    cout << ps.tu << "/" << ps.mau << endl;
}
int FindUCLN(int a, int b)
{
    if(a < 0)
    {
        a *= -1;
    }
    if(b < 0)
    {
        b *= -1;
    }

    if(a == 0 && b != 0)
    {
        return b;
    }
    else if (b == 0 && a != 0)
    {
        return a;
    }
    else
    {
        while(a != b)
        {
            if(a > b)
            {
                a -= b;
            }
            else
            {
                b -= a;
            }
        }
        return a;
    }
}
PhanSo RutGonPhanSo(PhanSo ps)
{
    int UCLN = FindUCLN(ps.mau, ps.tu);
    ps.tu /= UCLN;
    ps.mau /= UCLN;
    return ps;
}
PhanSo Sum2PhanSo(PhanSo ps1, PhanSo ps2)
{
    PhanSo sum;
    sum.tu = ps1.tu * ps2.mau + ps2.tu * ps1.mau;
    sum.mau = ps1.mau * ps2.mau;
    sum = RutGonPhanSo(sum);
    return sum;
}
PhanSo Subtract2PhanSo(PhanSo ps1, PhanSo ps2)
{
    PhanSo sum;
    sum.tu = ps1.tu * ps2.mau - ps2.tu * ps1.mau;
    sum.mau = ps1.mau * ps2.mau;
    sum = RutGonPhanSo(sum);
    return sum;
}
PhanSo Multiply2PhanSo(PhanSo ps1, PhanSo ps2)
{
    PhanSo sum;
    sum.tu = ps1.tu * ps2.tu;
    sum.mau = ps1.mau * ps2.mau;
    sum = RutGonPhanSo(sum);
    return sum;
}
PhanSo Divide2PhanSo(PhanSo ps1, PhanSo ps2)
{
    PhanSo sum;
    sum.tu = ps1.tu * ps2.mau;
    sum.mau = ps1.mau * ps2.tu;
    sum = RutGonPhanSo(sum);
    return sum;
}
bool CheckPhanSoToiGian(PhanSo ps)
{
    PhanSo check;
    check = RutGonPhanSo(ps);
    if(check.tu == ps.tu && check.mau == ps.mau)
    {
        return true;
    }
    return false;
}
void QuyDong2PhanSo(PhanSo& ps1, PhanSo& ps2)
{
    PhanSo temp = ps1;
    ps1.tu *= ps2.mau;
    ps1.mau *= ps2.mau;
    ps2.tu *= temp.mau;
    ps2.mau *= temp.mau;
}
bool CheckPositivePhanSo(PhanSo ps)
{
    if(ps.tu >= 0 && ps.mau >= 0)
    {
        return true;
    }
    return false;
}
bool CheckNegativePhanSo(PhanSo ps)
{
    if(ps.tu < 0 && ps.mau < 0)
    {
        return true;
    }
    return false;
}
int Compare2PhanSo(PhanSo ps1, PhanSo ps2)
{
    float kq1 = ps1.tu / ps1.mau;
    float kq2 = ps2.tu / ps2.mau;
    if(kq1 > kq2)
    {
        return 1;
    }
    else if (kq1 < kq2)
    {
        return -1;
    }
    else
    {
        return 0;
    }
}
PhanSo operator+ (PhanSo ps1, PhanSo ps2)
{
    PhanSo sum;
    sum.tu = ps1.tu * ps2.mau + ps2.tu * ps1.mau;
    sum.mau = ps1.mau * ps2.mau;
    sum = RutGonPhanSo(sum);
    return sum;
}
PhanSo operator- (PhanSo ps1, PhanSo ps2)
{
    PhanSo sum;
    sum.tu = ps1.tu * ps2.mau - ps2.tu * ps1.mau;
    sum.mau = ps1.mau * ps2.mau;
    sum = RutGonPhanSo(sum);
    return sum;
}
PhanSo operator* (PhanSo ps1, PhanSo ps2)
{
    PhanSo sum;
    sum.tu = ps1.tu * ps2.tu;
    sum.mau = ps1.mau * ps2.mau;
    sum = RutGonPhanSo(sum);
    return sum;
}
PhanSo operator/ (PhanSo ps1, PhanSo ps2)
{
    PhanSo sum;
    sum.tu = ps1.tu * ps2.mau;
    sum.mau = ps1.mau * ps2.tu;
    sum = RutGonPhanSo(sum);
    return sum;
}
int main()
{
    PhanSo ps1, ps2;
    Input(ps1); Input(ps2);
    PhanSo sum;
    sum = ps1 + ps2;
    Output(sum);
}
