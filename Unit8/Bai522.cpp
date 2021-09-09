#include <iostream>
using namespace std;
struct HonSo
{
    int nguyen;
    int tu;
    int mau;
};
void Input(HonSo& hs)
{
    cout << "Nhap nguyen: ";
    cin >> hs.nguyen;
    cout << "Nhap tu: ";
    cin >> hs.tu;
    cout << "Nhap mau: ";
    cin >> hs.mau;
}
void Output(HonSo hs)
{
    cout << "(" << hs.nguyen << " (" << hs.tu << "/" << hs.mau << "))" << endl;
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
    else if (a != 0 && b == 0)
    {
        return a;
    }

    while (a != b)
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
HonSo RutGonHonSo(HonSo hs)
{
    if(hs.tu > hs.mau)
    {
        int temp = hs.tu / hs.mau;
        hs.nguyen += temp;
        hs.tu -= hs.mau * temp;
    }
    int UCLN = FindUCLN(hs.tu, hs.mau);
    hs.tu /= UCLN;
    hs.mau /= UCLN;
    return hs;
}

HonSo Sum2HonSo(HonSo hs1, HonSo hs2)
{
    HonSo sum;
    sum.nguyen = hs1.nguyen + hs2.nguyen;
    sum.tu = hs1.tu * hs2.mau + hs2.tu * hs1.mau;
    sum.mau = hs1.mau * hs2.mau;
    sum = RutGonHonSo(sum);
    return sum;
}
HonSo Subtract2HonSo(HonSo hs1, HonSo hs2)
{
    HonSo sum;
    sum.nguyen = hs1.nguyen + hs2.nguyen;
    sum.tu = hs1.tu * hs2.mau - hs2.tu * hs1.mau;
    sum.mau = hs1.mau * hs2.mau;
    sum = RutGonHonSo(sum);
    return sum;
}
HonSo Multiply2HonSo(HonSo hs1, HonSo hs2)
{
    hs1.tu += hs1.nguyen * hs1.mau;
    hs2.tu += hs2.nguyen * hs2.mau;

    HonSo sum;
    sum.tu = hs1.tu * hs2.tu;
    sum.mau = hs1.mau * hs2.mau;
    sum = RutGonHonSo(sum);
    return sum;
}
HonSo Divide2HonSo(HonSo hs1, HonSo hs2)
{
    hs1.tu += hs1.nguyen * hs1.mau;
    hs2.tu += hs2.nguyen * hs2.mau;

    HonSo sum;
    sum.tu = hs1.tu * hs2.mau;
    sum.mau = hs1.mau * hs2.tu;
    sum = RutGonHonSo(sum);
    return sum;
}
bool CheckHonSoToiGian(HonSo hs)
{
    int UCLN = FindUCLN(hs.tu, hs.mau);
    if(UCLN == 1)
    {
        return true;
    }
    return false;
}
void QuyDong2HonSo(HonSo& hs1, HonSo& hs2)
{
    HonSo temp = hs1;
    hs1.tu *= hs2.mau;
    hs1.mau *= hs2.mau;
    hs2.tu = temp.mau;
    hs2.mau *= hs2.mau;
}
int main()
{
    
}