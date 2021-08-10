#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    double a, b, c;
    cin >> a >> b >> c;
    if (a == b && a == c)
    {
        cout << "Tam giac deu" << endl;
    }
    else if (a == b || a == c || b == c)
    {
        cout << "Tam giac can" << endl;
    }
    else if (pow(a,2) + pow(b,2) == pow(c,2) || pow(c,2) + pow(b,2) == pow(a,2) || pow(a,2) + pow(c,2) == pow(b,2))
    {
        cout << "Tam giac vuong" << endl;
    }
    else if (((pow(a,2) + pow(b,2) == pow(c,2)) && (a == b)) || ((pow(c,2) + pow(b,2) == pow(a,2)) && (b == c)) || ((pow(a,2) + pow(c,2) == pow(b,2)) && (a == c)))
    {
        cout << "Tam giac vuong can" << endl;
    }
    else
    {
        cout << "Tam giac thuong" << endl;
    }
}