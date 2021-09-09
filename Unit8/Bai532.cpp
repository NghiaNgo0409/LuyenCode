#include <iostream>
#include <math.h>
using namespace std;
struct SoPhuc
{
    int thuc;
    int ao;
};
void Input(SoPhuc& sp)
{
    cout << "Nhap phan thuc: ";
    cin >> sp.thuc;
    cout << "Nhap phan ao: ";
    cin >> sp.ao;
}
void Output(SoPhuc sp)
{
    if (sp.ao >= 0)
    {
        cout << sp.thuc << " + " << sp.ao << "i" << endl;
    }
    else
    {
        cout << sp.thuc << " - " << abs(sp.ao) << "i" << endl;
    }
}
SoPhuc Sum2SoPhuc(SoPhuc sp1, SoPhuc sp2)
{
    SoPhuc c;
    c.thuc = sp1.thuc + sp2.thuc;
    c.ao = sp1.ao + sp2.ao;
    return c;
}
SoPhuc Subtract2SoPhuc(SoPhuc sp1, SoPhuc sp2)
{
    SoPhuc c;
    c.thuc = sp1.thuc + sp2.thuc;
    c.ao = sp1.ao + sp2.ao;
    return c;
}
SoPhuc Multiply2SoPhuc(SoPhuc sp1, SoPhuc sp2)
{
    SoPhuc c;
    c.thuc = sp1.thuc * sp2.thuc - sp1.ao * sp2.ao;
    c.ao = sp1.thuc * sp2.ao + sp1.ao & sp2.thuc;
    return c;
}
SoPhuc SoPhucLienHop(SoPhuc sp)
{
    sp.thuc = -sp.thuc;
    return sp;
}
SoPhuc Divide2SoPhuc(SoPhuc sp1, SoPhuc sp2)
{
    SoPhuc c;
    c.thuc = (sp1.thuc * sp2.thuc + sp1.ao * sp1.ao) / (sp2.thuc * sp2.thuc + sp2.ao * sp2.ao);
    c.ao = (sp2.thuc * sp1.ao - sp2.ao * sp1.thuc) / (sp2.thuc * sp2.thuc + sp2.ao * sp2.ao);
    return c;
}
SoPhuc TinhLuyThuaBacN(SoPhuc sp, int n)
{
    while(n != 0)
    {
        sp = Multiply2SoPhuc(sp, sp);
        n--;
    }
    return sp;
}
int main()
{
    
}