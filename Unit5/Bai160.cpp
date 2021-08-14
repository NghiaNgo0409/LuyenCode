#include <iostream>
using namespace std;
double FindLastNegativeValue(double a[], int n)
{
    for(int i = n-1; i >= 0; i--)
    {
        if (a[i] > -1 && a[i] < 0)
        {
            return a[i];
        }
    }
    return -1;
}
int main()
{
    double a[5] = {-0.8, -0.6,3.2,1.8,-0.1};
    cout << FindLastNegativeValue(a, 5);
}