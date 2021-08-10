#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int a, b, c;
    double delta;
    cin >> a >> b >> c;
    if (a == 0)
    {
        if (b == 0 && c == 0)
        {
            cout << "Phuong trinh vo so nghiem" << endl;
        }
        else if (b == 0 && c != 0)
        {
            cout << "Phuong trinh vo nghiem" << endl;
        }
        else if (b != 0)
        {
            cout << double(-c)/b;
        }
    }
    else
    {
        delta = pow(b,2) - 4*a*c;
        if (delta < 0)
        {
            cout << "Phuong trinh vo nghiem" << endl;
        }
        else if (delta == 0)
        {
            cout << double(-b)/(2*a);
        }
        else
        {
            cout << "x1 = " << (-b-sqrt(delta))/(2*a) << endl;
            cout << "x2 = " << (-b+sqrt(delta))/(2*a);
        }
    }
}