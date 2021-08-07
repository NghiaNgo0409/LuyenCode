#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    if (a == 0)
    {
        if (b == 0)
        {
            if (c == 0)
            {
                cout << "Vo so nghiem" << endl;    
            }
            else
            {
                cout << "Vo nghiem" << endl;    
            }
        }
        else
        {
            cout << (double)(c) / b;
        }
    }
    else
    {
        double delta = pow(b,2) - 4*a*c;
        if (delta < 0)
        {
            cout << "Vo nghiem" << endl;
        }
        else if (delta == 0)
        {
            cout << double(-b)/(2*a);
        }
        else
        {
            cout << "x1 = " << (-b-sqrt(delta))/(2*a) << endl;
            cout << "x2 = " << (-b+sqrt(delta))/(2*a) << endl;
        }
    }
}