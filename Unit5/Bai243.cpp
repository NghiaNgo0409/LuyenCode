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
        for (int i = 2; i < sqrt(n); i++)
        {
            if (n % i == 0)
            {
                return false;
            }
        }
        return true;
    }
}
bool IsPrimeNumberInarray(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (CheckPrime(a[i]))
        {
            return true;
        }
    }
    return false;
}
int main()
{
    int a[] = {3,1,4,6,9};
    cout << IsPrimeNumberInarray(a, 5);
}