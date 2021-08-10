#include <iostream>
using namespace std;
int main()
{
    double a, b, c;
    cin >> a >> b >> c;
    double min = a;
    if (min < b && min < c)
    {
        cout << min << " ";
        min = b;
        if (min < c)
        {
            cout << min << " " << c;
        }
        else
        {
            cout << c << " " << min;
        }
    }
    else if (min < b && min > c)
    {
        cout << c << " " << min << " " << b;
    }
    else if (min > b && min < c)
    {
        cout << b << " " << min << " " << c;
    }
    else if (min > b && min > c)
    {
        min = b;
        if (min > c)
        {
            cout << c << " " << min << " " << a;
        }
        else if (min < c)
        {
            cout << min << " " << c << " " << a;
        }
    }
}