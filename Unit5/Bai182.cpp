#include <iostream>
using namespace std;
void ListEx182(double a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] * a[i-1] < 0 || a[i] * a[i+1] < 0)
        {
            cout << a[i] << " ";
        }
    }
}
int main()
{
    double a[] = {-2.4,1.3,15.8,9.3,-7.6,-3.2,0.1};
    ListEx182(a, 7);
}
