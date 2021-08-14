#include <iostream>
#include <math.h>
using namespace std;
double MinOfValue(double a[], int n)
{
    double min = a[0];
    for (int i = 0; i < n; i++)
    {
        if (a[i] <= min)
        {
            min = a[i];
        }
    }
    return min;
}
double MaxOfValue(double a[], int n)
{
    double max = a[0];
    for (int i = 0; i < n; i++)
    {
        if (a[i] >= max)
        {
            max = a[i];
        }
    }
    return max;
}
double FindX(double a[], int n)
{
    double absNum = (fabs(MinOfValue(a, n)) > fabs(MaxOfValue(a, n))) ? (MinOfValue(a, n)) : (MaxOfValue(a, n));
    return fabs(absNum);
}
int main()
{
    double a[5] = {2.3,-12.9,5.6,0.78,-6.2};
    cout << "[ " << -FindX(a, 5) << "  " << FindX(a,5) << " ]";
}