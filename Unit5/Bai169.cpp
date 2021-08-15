#include <iostream>
using namespace std;
int FindFirstOddValue(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 != 0)
        {
            return a[i];
        }
    }
    return -1;
}
int FindOddMax(int a[], int n)
{
    if (FindFirstOddValue(a, n) == -1)
    {
        return -1;
    }
    else
    {
        int max = a[FindFirstOddValue(a,n)];
        for (int i = 0; i < n; i++)
        {
            if (a[i] >= max && a[i] % 2 != 0)
            {
                max = a[i];
            }
        }
        return max;
    }
}
int main()
{
    int a[] = {1,2,3,4,5};
    cout << "So chan nho nhat ma lon hon moi gia tri trong mang a la : " << FindOddMax(a, 5) + 1;
}