#include <iostream>
using namespace std;
double FindXGreaterThan2003(double a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] >= 2003)
        {
            return a[i];
        }
        return -1;
    }
}
int main()
{
    double a[5] = {2006.2, -32.6,1993,2123.19,11.2};
    cout << FindXGreaterThan2003(a, 5);
}