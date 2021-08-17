#include <iostream>
#include <math.h>
using namespace std;
double SumEx205(double a[], int n)
{
    double sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > abs(a[i + 1]))
        {
            sum += a[i];
        }
    }
    return sum;
}
int main()
{
    double a[] = {1.3,2.4,-9.8,4.1,1.3};
    cout << SumEx205(a, 6);
}