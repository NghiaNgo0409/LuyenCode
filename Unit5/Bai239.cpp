#include <iostream>
#include <math.h>
using namespace std;
bool CheckPrime(int n)
{
    if (n < 2)
    {
        return false;
    }
    else 
    {
        for (int i = 2; i <= sqrt(n); i++)
        {
            if (n % i == 0)
            {
                return false;
            }
        }
        return true;
    }
}
bool IsNotDuplicate(int a[], int n, int index)
{
    for (int i = index - 1; i >= 0; i--)
    {
        if (a[i] == a[index])
        {
            return false;
        }
    }
    return true;
}
int CountExactPrimeNumber(int a[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (CheckPrime(a[i]))
        {
            if (IsNotDuplicate(a, n, i))
            {
                count++;
            }
        }
    }
    return count;
}
int main()
{
    int a[] = {3,7,7,11,11,13,2,4};
    cout << CountExactPrimeNumber(a, 8);
}