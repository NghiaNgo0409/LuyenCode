#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "Nhap a, b, c: " << endl;
    cin >> a >> b >> c;
    int d, e, f;
    cout << "Nhap d, e, f: " << endl;
    cin >> d >> e >> f;
    int D = a*e - d*b;
    int Dx = c*e - b*f;
    int Dy = a*f - d*c;
    if (D == 0)
    {
        if (Dx + Dy == 0)
        {
            cout << "He phuong trinh co vo so nghiem" << endl;
        }
        else
        {
            cout << "He phuong trinh vo nghiem" << endl;
        }
    }
    else
    {
        cout << "x = " << (double)Dx / D << endl;
        cout << "y = " << (double)Dy / D << endl;
    }
}