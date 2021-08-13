#include <iostream>
using namespace std;
double FindMin(double a[], int n)
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
int main()
{
    double a[5] = {3.4,-2.6,0.8,-9.12,8};
    cout << FindMin(a, 5);
}