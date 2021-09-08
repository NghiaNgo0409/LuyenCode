#include <iostream>
#include <math.h>
using namespace std;
struct DaThuc
{
    int a[100];
    int n;
};
void Initialize(DaThuc& dt)
{
    dt.n = 0;
    for(int i = 0; i < 100; i++)
    {
        dt.a[i] = 0;
    }
}
void Input(DaThuc& dt)
{
    Initialize(dt);
    cout << "Nhap so mu: ";
    cin >> dt.n;
    for(int i = dt.n; i >= 0; i--)
    {
        cout << "Nhap he so: ";
        cin >> dt.a[i];
    }
}
void Output(DaThuc dt)
{
    for(int i = dt.n; i > 0; i--)
    {
        cout << dt.a[i] << "x^" << i << " + ";
    }
    cout << dt.a[0] << "x^" << 0;
    cout << endl;
}
DaThuc Sum2DaThuc(DaThuc dt1, DaThuc dt2)
{
    DaThuc sum;
    Initialize(sum);
    if(dt1.n > dt2.n)
    {
        sum.n = dt1.n;
    }
    else
    {
        sum.n = dt2.n;
    }

    for(int i = 0; i <= sum.n; i++)
    {
        sum.a[i] = dt1.a[i] + dt2.a[i];
    }
    return sum;
}
DaThuc Subtract2DaThuc(DaThuc dt1, DaThuc dt2)
{
    DaThuc sub;
    Initialize(sub);
    if(dt1.n > dt2.n)
    {
        sub.n = dt1.n;
    }
    else
    {
        sub.n = dt2.n;
    }

    for(int i = 0; i <= sub.n; i++)
    {
        sub.a[i] = dt1.a[i] - dt2.a[i];
    }
    return sub;
}
DaThuc Multiply2DaThuc(DaThuc dt1, DaThuc dt2)
{
    DaThuc res;
    Initialize(res);
    res.n = dt1.n + dt2.n;

    for(int i = 0; i <= dt1.n; i++)
    {
        for(int j = 0; j <= dt2.n; j++)
        {
            res.a[i + j] += dt1.a[i] + dt2.a[j];
        }
    }
    return res;
}
DaThuc DaoHamCap1(DaThuc dt)
{
    DaThuc res;
    Initialize(res);
    res.n = dt.n - 1;

    for(int i = dt.n; i >= 0; i--)
    {
        res.a[i-1] = dt.a[i] * i;
    }
    return res;
}
DaThuc DaoHamCapk(DaThuc dt, int k)
{
    DaThuc res;
    Initialize(res);
    for(int i = 0; i < k; i++)
    {
        res = DaoHamCap1(res);
    }
    return res;
}
int CalculateDaThucAtX(DaThuc dt, int x0)
{
    int kq = 0;
    for(int i = dt.n; i >= 0; i--)
    {
        kq += dt.a[i] * pow(x0, i);
    }
    return kq;
}
int main()
{
    DaThuc dt1;
    DaThuc dt2;
    Input(dt1);
    DaThuc res;
    res = DaoHamCap1(dt1);
    Output(res);
}
