#include <iostream>
using namespace std;
void ListMaxValue(double a[], int n)
{
    double max = a[0];
    for (int i = 0; i < n; i++)
    {
        if (a[i] >= max)
        {
            max = a[i];
        }
    }
    cout << max;
}
int main()
{
    double a[] = {0.2,-9.8,12.0,3.5,-7.6};
    ListMaxValue(a, 5);
}
