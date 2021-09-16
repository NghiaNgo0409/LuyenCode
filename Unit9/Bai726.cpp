#include <iostream>
using namespace std;
int FindMax(int a[], int n)
{
    if (n == 1)
    {
        return a[0];
    }
    else
    {
        int max = FindMax(a, n - 1);
        if (a[n-1] > max)
        {
            max = a[n-1];
        }
        return max;
    }
}
int main()
{
    int a[5] = {1,2,3,4,5};
    cout << FindMax(a, 5);
}