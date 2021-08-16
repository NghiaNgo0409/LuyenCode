#include <iostream>
using namespace std;
double FindFirstNegative(double a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] < 0)
        {
            return a[i];
        }
    }
    return 0;
}
void ListEx186(double a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] == FindFirstNegative(a, n))
        {
            cout << i << " ";
        }
    }
}
int main()
{
    double a[] = {-2.3,3.1,5.6,-2.3,-2.3,9.0};
    ListEx186(a,6);
}