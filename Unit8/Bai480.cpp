#include <iostream>
using namespace std;
struct DaThuc
{
    int a[100];
    int n;
};
void Input(DaThuc& dt)
{
    cout << "Nhap bac da thuc: ";
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
int main()
{
    DaThuc dt;
    Input(dt);
    Output(dt);
}
