#include <iostream>
#include <math.h>
using namespace std;
void ListEx179(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] > abs(a[i+1]))
        {
            cout << a[i] << " ";
        }
    }
}
int main()
{
    int a[] = {-3,4,6,12,-8,1,3};
    ListEx179(a, 7);
}