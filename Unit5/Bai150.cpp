#include <iostream>
#include <math.h>
using namespace std;
double FindMaxNegativeValue(double a[], int n)
{
    double max = -abs(a[0]);
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] < 0 && a[i] >= max)
        {
            max = a[i];
            count++;
        }
    }
    if (count == 0)
    {
        return -1;
    }
    else
    {
        return max;
    }
}
int main()
{
    double a[5] = {3.2,1.2,0.8,0.5,13};
    cout << FindMaxNegativeValue(a, 5);
}