#include <iostream>
using namespace std;
int IndexOfMin(double a[], int n)
{
    double min = a[0], pos = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] <= min)
        {
            min = a[i];
            pos = i;
        }
    }
    return pos;
}
int main()
{
    double a[5] = {-3.5,9.2,4.76,-10.22,-15.7};
    cout << IndexOfMin(a, 5);
}