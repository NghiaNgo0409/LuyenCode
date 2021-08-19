#include <iostream>
#include <math.h>
using namespace std;
bool CheckPrime(int n)
{
    if (n < 2)
    {
        return 0;
    }
    else
    {
        for (int i = 2; i <= sqrt(n); i++)
        {
            if (n % 2 == 0)
            {
                return false;
            }
        }
        return true;
    }
}
int CountPrimeNumber(int a[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (CheckPrime(a[i]))
        {
            count++;
        }
    }
    return count;
}
int main()
{
    int a[] = {3,5,11,4,2,7};
    cout << CountPrimeNumber(a, 6);
}