#include <iostream>
#include <math.h>
using namespace std;
double FindMinPositiveValue(double a[], int n)
{
    double min  = abs(a[0]);
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] >= 0 && a[i] <= min)
        {
            min = a[i];
            count++;
        }
    }
    if (count == 0)
    {
        return -1;
    }
    else
    {
        return min;
    }
}
int main()
{
    double a[5] = {-3.4,-4.2, -1.6, -0.8, -2};
    cout << FindMinPositiveValue(a, 5);
}