#include <iostream>
#include <math.h>
using namespace std;
void ListEx180(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (abs(a[i-1] < a[i] < abs(a[i-1])))
        {
            cout << a[i] << " ";
        }
    }
}
int main()
{
    int a[] = {3,-4,6,7,-10,13};
    ListEx180(a,6);
}