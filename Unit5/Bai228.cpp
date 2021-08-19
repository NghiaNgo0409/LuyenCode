#include <iostream>
#include <math.h>
using namespace std;
int CountEx228(int a[], int n)
{
    int count = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (i == n - 1 && a[i] * a[i - 1] > 0 && abs(a[i - 1]) > abs(a[i]))
        {
            count++;
        }
        else if (a[i] * a[i+1] > 0 && abs(a[i]) > abs(a[i+1]))
        {
            count++;
        }
    }
    return count;
}
int main()
{
    int a[] = {3,2,-5,1,-4,-3};
    cout << CountEx228(a, 6);
}