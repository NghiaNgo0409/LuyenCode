#include <iostream>
using namespace std;
double FindFirstPositive(double a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] >= 0)
        {
            return a[i];
        }
    }
}
double FindMinPositive(double a[], int n)
{
    double min = FindFirstPositive(a, n);
    for (int i = 0; i < n; i++)
    {
        if (a[i] <= min && a[i] >= 0)
        {
            min = a[i];
        }
    }
    return min;
}
void ListMinPos(double a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] == FindMinPositive(a, n))
        {
            cout << i << " ";
        }
    }
}
int main()
{
    double a[] = {3.2,1.6,-2.3,-4.5,1.6,4.2,-5.3};
    ListMinPos(a, 7);
}