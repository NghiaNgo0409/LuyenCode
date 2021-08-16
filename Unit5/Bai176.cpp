#include <iostream>
using namespace std;
void ListNegativeValue(double a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] < 0)
        {
            cout << a[i] << " ";
        }
    }
}
int main()
{
    double a[] = {2.4,-10,-9.8,0.2,0.6,-4.1};
    ListNegativeValue(a, 6);
}