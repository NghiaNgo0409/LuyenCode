#include <iostream>
using namespace std;
int FindFirstEven(int a[], int n)
{
    for(int i = 0; i < n; i++)
    {
        if(a[i] % 2 == 0)
        {
            return a[i];
        }
    }
}
int FindMaxEven(int a[], int n)
{
    int max = FindFirstEven(a, n);
    for(int i = 0; i < n; i++)
    {
        if(a[i] % 2 == 0 && a[i] > max)
        {
            max = a[i];
        }
    }
    return max;
}
int main()
{
    int a[5] = {1, 4, 6,6, 3};
    int max = FindMaxEven(a, 5);
    for(int i = 0; i < 5; i++)
    {
        if(a[i] == max)
        {
            cout << i << " ";
        }
    }
}