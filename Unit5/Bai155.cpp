#include <iostream>
#include <math.h>
using namespace std;
double ValueFarFromX(double a[], int n, double x)
{
    double distance = abs(x-a[0]);
    double max = 0;
    for (int i = 0; i < n; i++)
    {
        if (abs(x-a[i]) >= distance)
        {
            distance = abs(x-a[i]);
            max = a[i];
        }
    }
    return max;
}
int main()
{
    double a[5] = {3.4,-2.1,11.5,9.2,-0.7};
    cout << ValueFarFromX(a, 5, 10);
}