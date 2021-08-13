#include <iostream>
using namespace std;
int FindFirstEvenValue(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            return i;
        }
    }
    return -1;
}
int FindMinEvenValue(int a[], int n)
{
    if (FindFirstEvenValue(a, n) == -1)
    {
        return -1;
    }
    else
    {
        int min = a[FindFirstEvenValue(a,n)];
        for (int i = FindFirstEvenValue(a,n) + 1; i < n; i++)
        {
            if (a[i] % 2 == 0 && a[i] <= min)
            {
                min = a[i];
            }
        }
        return min;
    }
}
int main()
{
    int a[5] = {8,4,7,9,12};
    cout << FindMinEvenValue(a, 5);
}