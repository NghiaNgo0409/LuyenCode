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
            if((double(c)/b > 0))
            {
                cout << "x1 = " << sqrt(double(c)/b) << endl;
                cout << "x2 = " << -sqrt(double(c)/b) << endl;
            }
            else
            {
                cout << "Vo nghiem" << endl;
            }
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
            if (double(-b)/(2*a) > 0)
            {
                cout << "x1 = " << sqrt(double(-b)/(2*a)) << endl;
                cout << "x2 = " << -sqrt(double(-b)/(2*a)) << endl;
            }
        }
        else
        {
            if((-b-sqrt(delta))/(2*a) > 0)
            {
                cout << "x1 = " << sqrt((-b-sqrt(delta))/(2*a)) << endl;
                cout << "x2 = " << -sqrt((-b-sqrt(delta))/(2*a)) << endl;
            }
            else if ((-b+sqrt(delta))/(2*a) > 0)
            {
                cout << "x1 = " << sqrt((-b+sqrt(delta))/(2*a)) << endl;
                cout << "x2 = " << -sqrt((-b+sqrt(delta))/(2*a)) << endl;
            }
        }
    }
}