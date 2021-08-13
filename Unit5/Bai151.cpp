#include <iostream> 
using namespace std;
bool CheckPrimeNumber(int n)
{
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}
int FindFirstPrimeNumber(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (CheckPrimeNumber(a[i]))
        {
            return i;
        }
    }
    return -1;
}   
int FindMaxPrimeNumber(int a[], int n)
{
    if (FindFirstPrimeNumber(a, n) == -1)
    {
        return -1;
    }
    else
    {
        int max = a[FindFirstPrimeNumber(a,n)];
        for (int i = FindFirstPrimeNumber(a,n) + 1; i < n; i++)
        {
            if (CheckPrimeNumber(a[i]) && a[i] >= max)
            {
                max = a[i];
            }
        }
        return max;
    }
}
int main()
{
    int a[5] = {2,3,5,7,17};
    cout << FindMaxPrimeNumber(a, 5);
}