#include <iostream>
#include <math.h>
using namespace std;
float Delta(float a, float b, float c)
{
    return pow(b,2) - 4 * a * c;
}
int main()
{
    float a, b, c;
    cout << "Nhap a: ";
    cin >> a;
    cout << "Nhap b: ";
    cin >> b;
    cout << "Nhap c: ";
    cin >> c;
    if(a == 0) 
    {
        cout << "Phuong trinh: " << b << "x + " << c << " = 0" << endl;
        if(b == 0 && c == 0)
        {
            cout << "Phuong trinh vo so nghiem" << endl;
        }
        else if (b == 0 && c != 0)
        {
            cout << "Phuong trinh vo nghiem" << endl;
        }
        else if (b != 0)
        {
            float x = -c / b;
            cout << "x = " << x << endl;
        }
    }
    else 
    {
        cout << "Phuong trinh: " << a << "x^2 + " << b << "x + " << c << " = 0" << endl;
        float delta = Delta(a, b, c);
        if(delta < 0)
        {
            cout << "Phuong trinh vo so nghiem" << endl;
        }
        else if (delta == 0)
        {
            float x = -b/(2*a);
            cout << "x1 = x2 = " << x << endl;
        }
        else
        {
            float x1 = (-b-sqrt(delta))/(2*a);
            float x2 = (-b+sqrt(delta))/(2*a);
            cout << "x1 = " << x1 << endl;
            cout << "x2 = " << x2 << endl;
        }
    }
}
