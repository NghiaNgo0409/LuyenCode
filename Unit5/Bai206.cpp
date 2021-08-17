#include <iostream>
using namespace std;
double SumEx206(double a[], int n)
{
    double sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > a[i+1] && a[i] > a[i-1])
        {
            sum += a[i];
        }
    }
    return sum;
}
int main()
{
    double a[] = {1.3,2.4,-3.6,4.8,0.5};
    cout << SumEx206(a, 5);
}