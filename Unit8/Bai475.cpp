#include <iostream>
using namespace std;
struct PhanSo
{
    int tu;
    int mau;
};
void Input(PhanSo &ps)
{
    cout << "Nhap tu so: ";
    cin >> ps.tu;
    do
    {
        cout << "Nhap mau so: ";
        cin >> ps.mau;
        if(ps.mau == 0)
        {
            cout << "Mau so phai khac 0. Vui long nhap lai: ";
        }
    } while (ps.mau == 0);
}
void Output(PhanSo ps)
{
    cout << ps.tu << "/" << ps.mau << endl;
}
int main()
{
    PhanSo ps;
    Input(ps);
    Output(ps);
}