#include <iostream>
#include <math.h>
using namespace std;
double ValueNearFromX(double a[], int n, double x)
{
    double distance = abs(x-a[0]);
    double min;
    for (int i = 0; i < n; i++)
    {
        if (abs(x-a[i]) <= distance)
        {
            distance = abs(x-a[i]);
            min = a[i];
        }
    }
    return min;
}
int main()
{
    double a[5] = {2.5,0.8,-10.3,1.6,-5.9};
    cout << ValueNearFromX(a, 5, 6);
}