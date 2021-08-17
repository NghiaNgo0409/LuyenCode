#include <iostream>
using namespace std;
double SumPositiveValue(double a[], int n)
{
    double sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] >= 0)
        {
            sum += a[i];
        }
    }
    return sum;
}
int main()
{
    double a[] = {1.3,5.6,-10.8,4.7,7.4};
    cout << SumPositiveValue(a, 5);
}