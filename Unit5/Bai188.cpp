#include <iostream>
using namespace std;
int FindFirstEvenValue(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            return a[i];
        }
    }
}
int FindMaxEven(int a[], int n)
{
    int max = FindFirstEvenValue(a, n);
    for (int i = 0; i < n; i++)
    {
        if (a[i] >= max && a[i] % 2 == 0)
        {
            max = a[i];
        }
    }
    return max;
}
void ListMaxEvenPos(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] == FindMaxEven(a, n))
        {
            cout << i << " ";
        }
    }
}
int main()
{
    int a[] = {2,3,1,4,-5,-1,4,1,3};
    ListMaxEvenPos(a, 9);
}