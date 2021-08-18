#include <iostream>
using namespace std;
double TBCPositiveValue(double a[], int n)
{
    double sum = 0;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] >= 0)
        {
            sum += a[i];
            count++;
        }
    }
    return sum/count;
}
int main()
{
    double a[] = {-3.4,1.2,2.5,-4.9,-12.3};
    cout << TBCPositiveValue(a, 5);
}