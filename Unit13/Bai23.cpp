#include <iostream>
using namespace std;
int FindFirstOdd(int a[], int n)
{
    for(int i = 0; i < n; i++)
    {
        if(a[i] % 2 != 0)
        {
            return a[i];
        }
    }
}
int FindMinOdd(int a[], int n)
{
    int min = FindFirstOdd(a, n);
    for(int i = 0; i < n; i++)
    {
        if(a[i] % 2 != 0 && a[i] < min)
        {
            min = a[i];
        }
    }
    return min;
}
int main()
{
    int a[5] = {9,4,5,7,8};
    int min = FindMinOdd(a, 5);
    cout << min - 1;
}