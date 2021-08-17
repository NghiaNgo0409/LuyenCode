#include <iostream>
using namespace std;
double SumEx204(double a[], int n)
{
    double sum = 0;
    for(int i = 0; i < n; i++)
    {
        if (a[i] > a[i-1])
        {
            sum += a[i];
        }
    }
    return sum;
}
int main()
{
    double a[] = {1.3,2.4,-7.1,13.4,2.5};
    cout << SumEx204(a, 5);
}