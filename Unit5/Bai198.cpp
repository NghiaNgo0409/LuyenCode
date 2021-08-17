#include <iostream>
using namespace std;
double FindMax(double a[], int n)
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
void ListMaxPos(double a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] == FindMax(a, n))
        {
            cout << i << " ";
        }
    }
}
int main()
{
    double a[] = {1.2,3.6,-19.4,-5.8,4.1};
    ListMaxPos(a, 5);
}