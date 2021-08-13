#include <iostream>
using namespace std;
bool CheckPerfectNumber(int n)
{
    int sum = 0; 
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            sum += i;
        }
    }
    if (sum == n)
    {
        return 1;
    }
    else 
    {
        return 0;
    }
}
int FindFirstPerfectNumber(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (CheckPerfectNumber(a[i]))
        {
            return i;
        }
    }
    return -1;
}
int FindMinPerfectNumber(int a[], int n)
{
    if (FindFirstPerfectNumber(a, n) == -1)
    {
        return -1;
    }
    else
    {
        int min = a[FindFirstPerfectNumber(a, n)];
        for (int i = FindFirstPerfectNumber(a,n) + 1; i < n; i++)
        {
            if (CheckPerfectNumber(a[i]) && a[i] <= min)
            {
                min = a[i];
            }
        }
        return min;
    }
}
int main()
{
    int a[5] = {2,3,29,1,7};
    cout << FindMinPerfectNumber(a,5);
}