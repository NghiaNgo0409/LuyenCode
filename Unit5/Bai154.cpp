#include <iostream>
using namespace std;
int FindFirstNegativeValue(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] < 0)
        {
            return i;
        }
    }
    return -1;
}
int FindMinEvenValue(int a[], int n)
{
    if (FindFirstNegativeValue(a, n) == -1)
    {
        return -1;
    }
    else
    {
        int min = a[FindFirstNegativeValue(a,n)];
        for (int i = FindFirstNegativeValue(a,n) + 1; i < n; i++)
        {
            if (a[i] < 0 && a[i] <= min)
            {
                min = a[i];
            }
        }
        return min;
    }
}
int main()
{
    int a[5] = {-3,-4,7,9,-12};
    cout << FindMinEvenValue(a, 5);
}