#include <iostream>
using namespace std;
double FindMaxArray(double a[], int n)
{
    double max = a[0];
    for (int i = 0; i < n; i++)
    {
        if (a[i] >= max)
        {
            max = a[i];
        }
    }
    return max;
}
int main()
{
    double a[5] = {3.44, -2.6, 10, -3, 9.3};
    cout << FindMaxArray(a, 5);
}