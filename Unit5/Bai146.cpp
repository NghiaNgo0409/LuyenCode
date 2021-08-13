#include <iostream>
using namespace std;
double FindFirstNegativeValue(double a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] < 0)
        {
            return a[i];
        }
    }
    return -1;
}
int main()
{
    double a[5] = {3,2,-4.6,-9.2,11};
    cout << FindFirstNegativeValue(a, 5);
}