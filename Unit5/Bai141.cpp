#include <iostream>
#include <math.h>
using namespace std;
double FindPosOfMinPositiveValue(double a[], int n)
{
    double min  = abs(a[0]);
    int pos = -1;
    for (int i = 0; i < n; i++)
    {
        if (a[i] >= 0 && a[i] <= min)
        {
            min = a[i];
            pos = i;
        }
    }
    return pos;
}
int main()
{
    double a[5] = {-3.4,-4.2, -1.6, 0.8, -2};
    cout << FindPosOfMinPositiveValue(a, 5);
}