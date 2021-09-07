#include <iostream>
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
int main()
{
    DonThuc dt;
    Input(dt);
    Output(dt);
}
